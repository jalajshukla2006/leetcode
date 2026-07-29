# 268. Missing Number

| Field | Value |
|---|---|
| Question # | 268 |
| Title | Missing Number |
| Difficulty | Easy |
| Topics | Array, Hash Table, Math, Binary Search, Bit Manipulation, Sorting |
| Link | https://leetcode.com/problems/missing-number/description/ |
| Submission ID | 2085535667 |
| Submitted | 2026-07-29 04:17 UTC |

---

Given an array `nums` containing `n` distinct numbers in the range `[0, n]`, return *the only number in the range that is missing from the array.*

**Example 1:**

**Input:** nums = [3,0,1]

**Output:** 2

**Explanation:**

`n = 3` since there are 3 numbers, so all numbers are in the range `[0,3]`. 2 is the missing number in the range since it does not appear in `nums`.

**Example 2:**

**Input:** nums = [0,1]

**Output:** 2

**Explanation:**

`n = 2` since there are 2 numbers, so all numbers are in the range `[0,2]`. 2 is the missing number in the range since it does not appear in `nums`.

**Example 3:**

**Input:** nums = [9,6,4,2,3,5,7,0,1]

**Output:** 8

**Explanation:**

`n = 9` since there are 9 numbers, so all numbers are in the range `[0,9]`. 8 is the missing number in the range since it does not appear in `nums`.

**Constraints:**

- `n == nums.length`
- `1 <= n <= 104`
- `0 <= nums[i] <= n`
- All the numbers of `nums` are **unique**.

**Follow up:** Could you implement a solution using only `O(1)` extra space complexity and `O(n)` runtime complexity?

---

## Submission

**Status:** Accepted  
**Language:** C++  

| Metric | Value |
|---|---|
| Runtime | 0 ms (beats 100.0%) |
| Memory | 21.8 MB (beats 39.3%) |
| Test cases | 122 / 122 |

Solution: [`268-missing-number.cpp`](./268-missing-number.cpp)

```cpp

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // (set_difference requires sorted containers)
        sort(nums.begin(), nums.end());
        vector<int> numbers;
        for (int i = 0; i <= nums.size(); i++) {
            numbers.push_back(i);
        }
        for (size_t i = 0; i <= numbers.size(); i++) {
            int num = numbers[i];
            //    cout << num << " ";
        }
        cout << endl;
        vector<int> ans;
        set_difference(numbers.begin(), numbers.end(), nums.begin(), nums.end(),
                       back_inserter(ans));

        /*  Another way to do the above for loop as ;
         *	for (int num : numbers) {
         *    	   cout << num << " ";
         *   	}
         */
        return ans[0];
    }
};

```

>> One of the Solution that I found without any two loop just for the conditions.

```cpp

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        //case 1
        if(nums[0] != 0)return 0;
        //case 2 
        if(nums[n-1] != n)return n;
        for(int i =1;i<nums.size();i++){
            if(nums[i] != i){
            //case 3
            return i;
            }
        }
        return 0;
    }
};

```