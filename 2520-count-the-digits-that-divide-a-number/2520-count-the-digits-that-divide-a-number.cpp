class Solution {
public:
    int countDigits(int num) {
        int n = num;
        int count = 0;
        for(int i=0; n !=0; i++){
            int val = n%10;
            if(num % val == 0){
                count ++;
            }
            n = n /10;
        }
        return count;
        
    }
};
