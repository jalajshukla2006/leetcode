class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i =1; i < nums.size(); i++){// Start at index 1 to avoid out-of-bounds access at nums[-1]
            nums[i] = nums[i] + nums[i - 1];
        }
        return nums;
    } 
};
