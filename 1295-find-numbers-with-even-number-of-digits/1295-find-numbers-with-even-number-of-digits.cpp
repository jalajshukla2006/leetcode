class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int length = 0;
        int count =0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                length = 1;
            } else {
                length = log10(abs(nums[i])) + 1;
            }
            if(length % 2==0){
                count = count +1;
            }
        }
        return count;
    }
};
