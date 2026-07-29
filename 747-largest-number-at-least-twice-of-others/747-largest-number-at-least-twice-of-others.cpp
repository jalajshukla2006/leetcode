class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int greatest = INT_MIN;
        int idx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (greatest < nums[i]) {
                greatest = nums[i];
                idx = i;
            }
        }
        // cout << "greatest: " << greatest << endl;
        int sec_greatest = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] < greatest && nums[i] > sec_greatest) {
                sec_greatest = nums[i];
            }
        }
        // cout << "sec_greatest: "<< sec_greatest << endl;

        if (sec_greatest * 2 <= greatest) {
            return idx;
        } else {
            return -1;
        }
    }
};
