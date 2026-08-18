class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> myArr;
        int zero = 0;
        for(int i =0; i < nums.size();i++){
            if(nums[i] != 0){
                myArr.push_back(nums[i]);
            }
        }
        int totalZeros = (int)nums.size() - (int)myArr.size();
        for(int i =0; i < totalZeros; i++){
            myArr.push_back(zero);
        }
        nums = myArr;
        
    }
};

class Solution_0 {
public:
    void moveZeroes(vector<int>& nums) {
        int mark_A = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[mark_A] = nums[i]; 
                mark_A++;             
            }
        }
        for (int i = mark_A; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};

class Solution_1 {
public:
    void moveZeroes(vector<int>& v) {
        int left=0;
        int right=1;
        while(right<v.size())
        {
            if(v[left]==0 && v[right]!=0)
            {
                swap(v[left],v[right]);
                left++;
                right++;
            }
           else if(v[left]==0 && v[right]==0)
            {
                    right++;
            }
            else
            {
                left++;
                right++;
            }
        }
      // return v;
    }
};
