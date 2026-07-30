class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) { 
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; // No solution found
    }
};


/*
My Failed Attempt : In this the loop was exectuing but not including the last element of the array.
It passed the 47 cases but failed at [3,2,3] target = 6; Output [] ; Expected [0,2]
47 / 65 testcases passed
submitted at Jul 30, 2026 05:57

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int next =0;
        for(int i=0; i < nums.size() -1 ;i++){
            if(nums[i]+ nums[i+1]== target){
                result.push_back(i);
                result.push_back(i+1);
            }
            
        }
        return result;
        
    }
};

*/
