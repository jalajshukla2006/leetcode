class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size()+1;
        int mySum= (n*(n-1)/2);
        int arrSum;
        for (int i =0; i < nums.size();i++){
            arrSum =nums[i]+arrSum;
        }
        return (mySum - arrSum);  
    }
};
