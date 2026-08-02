class Solution {
public:
    int commonFactors(int a, int b) {
        int count=0;
        int small = min(a,b);
        int i=1;
        while(i<= small){
            if(a %i ==0 && b%i==0){
                count = count+1;
            }
            i++;
        }
        
        return count;
    }
    
};
