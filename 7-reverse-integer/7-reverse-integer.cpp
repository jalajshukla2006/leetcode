class Solution {
public:
    int reverse(int x) {
        int result =0;
        for(int i=0; x !=0 ; i++){
        int digit = x % 10;
        x = x/10;
        result = result * 10 + digit;
        } 
        return result;   
    }
};
