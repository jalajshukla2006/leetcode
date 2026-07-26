class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int ans =0;
    int nums_size = nums.size();
    for(int i =0; i<nums_size; i++){
        ans = ans ^ nums[i];
    }
        return ans;
    }
};
