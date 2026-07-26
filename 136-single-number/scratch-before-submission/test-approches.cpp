#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <cmath>


using namespace std;
/* =============================================================================================================================*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /*

        APPROACH 1 ( XOR LOGIC ) -- accepted solution
        

        */ 
        int ans = 0;
        int size = nums.size();
        for(int i = 0; i < size ;i++){
            ans = ans ^ nums[i]; // Main Heart of the Solution
        }
        return ans;
        /*

        APPROACH 2 {not submitted as it above to time and space requirement in problem} --although it will run with success in leetcode
        Sorting groups every duplicate pair adjacently. Scanning in twos, 
        a matching pair means both belong to duplicates—skip past them. 
        A mismatch means the current element has no partner nearby, so it must be the single, unpaired number.

        Complexity (of this implementation)
        Time: O(n log n) — dominated by sort(). The while-loop itself is only O(n), but sorting is the bottleneck.
        Space: O(log n) to O(n) — std::sort is typically introsort, which uses recursion internally for its 
        quicksort partitioning; that recursion depth (typically O(log n), worst-case O(n) for certain implementations) counts as 
        auxiliary space, even though you didn't allocate any array yourself.
        

        int i = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        while(i< n-1){
            if(nums[i]==nums[i+1]){
                i = i+2;
            }
            else{
                return nums[i];
            }
        }
        return nums[i];
        */
/*
       
APPROACH 3 {It also runs in the leetcode}

function singleNumber(nums):
    create an empty hash set, s
    for each num in nums:
        if num exists in s:
            erase num from s
        else:
            insert num into s

    return the only element left in s


Intuition

Treat the set as a toggle switch for each number: first sighting turns it "on" (insert), second sighting turns it "off" (erase).
 Every duplicate cancels itself out completely. Whatever's still "on" after the full scan never got a partner — that's the singleton.

Working (trace on [4,1,2,1,2])
4 → not in s → insert → {4}
1 → not in s → insert → {4,1}
2 → not in s → insert → {4,1,2}
1 → in s → erase → {4,2}
2 → in s → erase → {4}

End of loop: only 4 remains → return 4.

Complexity
Time: O(n) — single pass over nums; each count, insert, erase is O(1) average for unordered_set.
Space: O(n) — worst case, the set can grow to hold nearly n/2–n elements simultaneously before pairs get erased.
    -----

    CODE

        unordered_set<int> s;

        for (int num : nums) {
            if (s.count(num)) {
                s.erase(num);
            } else {
                s.insert(num);
            }
        }

        return *s.begin();


A few things to notice as you read through it:

s.count(num) returns 1 (truthy) or 0 (falsy), so it works directly as an if condition — no need to write s.count(num) == 1.
The for (int num : nums) is the range-based for-loop — it hands you a copy of each element in turn, no manual indexing needed.
*s.begin() — s.begin() gives an iterator to the single remaining element, and * dereferences it to pull out the actual value.


*/
/*
unordered_set<int> s;
long total_all = 0, total_distinct = 0;

for (int num : nums) {
    total_all += num;
    if (s.find(num) == s.end()) {   // not present yet
        s.insert(num);
        total_distinct += num;
    }
}
return (2 * total_distinct) - total_all;

*/

/*
unordered_set<int> s;
long long total_all_sq = 0, total_distinct_sq = 0;

for (int num : nums) {
    total_all_sq += (long long)num * num;
    if (s.find(num) == s.end()) {
        s.insert(num);
        total_distinct_sq += (long long)num * num;
    }
}
long long diff = (2 * total_distinct_sq) - total_all_sq;
return (int)sqrt((double)diff);   // <cmath> needed for sqrt


✅ Test Case 1 Passed. Output: 1
✅ Test Case 2 Passed. Output: 4
✅ Test Case 3 Passed. Output: 1
✅ Test Case 4 Passed. Output: 0
❌ Error on Test Case 5: Expected -1, but got 1
✅ Test Case 6 Passed. Output: 30000
❌ Error on Test Case 7: Expected -30000, but got 30000
✅ Test Case 8 Passed. Output: 42
✅ Test Case 9 Passed. Output: 2
✅ Test Case 10 Passed. Output: 2
✅ Test Case 11 Passed. Output: 2
✅ Test Case 12 Passed. Output: 10
✅ Test Case 13 Passed. Output: 10
✅ Test Case 14 Passed. Output: 10
✅ Test Case 15 Passed. Output: 100
✅ Test Case 16 Passed. Output: 100
❌ Error on Test Case 17: Expected -2, but got 2
❌ Error on Test Case 18: Expected -2, but got 2
❌ Error on Test Case 19: Expected -2, but got 2
❌ Error on Test Case 20: Expected -10, but got 10
❌ Error on Test Case 21: Expected -10, but got 10
❌ Error on Test Case 22: Expected -10, but got 10
❌ Error on Test Case 23: Expected -100, but got 100
❌ Error on Test Case 24: Expected -100, but got 100
✅ Test Case 25 Passed. Output: 1
✅ Test Case 26 Passed. Output: 1
✅ Test Case 27 Passed. Output: 1
❌ Error on Test Case 28: Expected -1, but got 1
❌ Error on Test Case 29: Expected -1, but got 1
❌ Error on Test Case 30: Expected -1, but got 1
✅ Test Case 31 Passed. Output: 5
✅ Test Case 32 Passed. Output: 5
✅ Test Case 33 Passed. Output: 5
✅ Test Case 34 Passed. Output: 10
✅ Test Case 35 Passed. Output: 10
✅ Test Case 36 Passed. Output: 10
✅ Test Case 37 Passed. Output: 3
✅ Test Case 38 Passed. Output: 3
✅ Test Case 39 Passed. Output: 3
✅ Test Case 40 Passed. Output: 3
❌ Error on Test Case 41: Expected -3, but got 3
❌ Error on Test Case 42: Expected -3, but got 3
❌ Error on Test Case 43: Expected -3, but got 3
❌ Error on Test Case 44: Expected -3, but got 3
✅ Test Case 45 Passed. Output: 2
✅ Test Case 46 Passed. Output: 2
✅ Test Case 47 Passed. Output: 2
✅ Test Case 48 Passed. Output: 2
✅ Test Case 49 Passed. Output: 4
✅ Test Case 50 Passed. Output: 4
✅ Test Case 51 Passed. Output: 4
❌ Error on Test Case 52: Expected -4, but got 4
❌ Error on Test Case 53: Expected -4, but got 4
❌ Error on Test Case 54: Expected -4, but got 4
✅ Test Case 55 Passed. Output: 15
✅ Test Case 56 Passed. Output: 15
✅ Test Case 57 Passed. Output: 7
❌ Error on Test Case 58: Expected -7, but got 7
✅ Test Case 59 Passed. Output: 3000
❌ Error on Test Case 60: Expected -3000, but got 3000
❌ Error on Test Case 61: Expected -30000, but got 30000
❌ Error on Test Case 62: Expected -30000, but got 30000
✅ Test Case 63 Passed. Output: 45
✅ Test Case 64 Passed. Output: 45

--- TEST SUMMARY ---
24 test cases failed.
*/


/*
int result = 0;

for (int bitPos = 0; bitPos < 32; bitPos++) {
    int count = 0;
    for (int num : nums) {
        if ((num >> bitPos) & 1) {   // extract bit at bitPos
            count++;
        }
    }
    if (count % 2 != 0) {
        result |= (1 << bitPos);    // set that bit in result
    }
}
return result;
*/


    }
};

/* =============================================================================================================================*/

int main() {
    // Open the input test cases and the expected solutions files
    ifstream testFile("testcases.txt");
    ifstream solFile("solution.txt");
    
    // Check if both files opened successfully
    if (!testFile.is_open() || !solFile.is_open()) {
        cerr << "Error: Could not open testcases.txt or solution.txt." << endl;
        cerr << "Ensure both files exist in the same directory as the executable." << endl;
        return 1;
    }

    string testLine, solLine;
    int testCaseNumber = 1;
    int failedCount = 0;
    Solution solution;

    // Read both files line by line simultaneously
    while (getline(testFile, testLine) && getline(solFile, solLine)) {
        if (testLine.empty() || solLine.empty()) continue; 

        // Parse the test case array
        stringstream ss(testLine);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }

        // Parse the expected answer from solution.txt
        int expectedAnswer = stoi(solLine);

        // Execute your solution
        int result = solution.singleNumber(nums);
        
        // Compare and print errors if they do not match
        if (result != expectedAnswer) {
            cerr << "❌ Error on Test Case " << testCaseNumber 
                 << ": Expected " << expectedAnswer << ", but got " << result << "\n";
            failedCount++;
        } else {
            cout << "✅ Test Case " << testCaseNumber << " Passed. Output: " << result << "\n";
        }
        
        testCaseNumber++;
    }

    // Check if one file had more lines than the other
    if (getline(testFile, testLine) || getline(solFile, solLine)) {
        cerr << "\nWarning: testcases.txt and solution.txt have a different number of lines!" << endl;
    }

    testFile.close();
    solFile.close();

    // Final Summary
    cout << "\n--- TEST SUMMARY ---\n";
    if (failedCount == 0) {
        cout << "All " << (testCaseNumber - 1) << " test cases passed successfully!\n";
    } else {
        cout << failedCount << " test cases failed.\n";
    }

    return 0;
}