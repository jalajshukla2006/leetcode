// Also Submission to Leetcode, Submission ID = 2091949925

#include<iostream>
using namespace std;
int main(){
    //int a = 48;
    //int b = 18;
    int count=0;
        int small = min(a,b);
        int large = max(a,b);
        while(small !=0){
            int temp = large % small;
            large = small;
            small = temp;
            // count = count + 1;
           // cout <<"temp inner: "<< temp << endl;
        }
        // cout << "count : "<< count << endl;
        // cout << "small : "<< small << endl;
        // cout << "large : "<< large << endl;


        /*
        DRY RUN:

        >>> 48%18
            12
        >>> 18%12
            6
        >>> 12%6
            0 

        */
        /*
        OUTPUT:
        temp inner: 12
        temp inner: 6
        temp inner: 0
        count : 3
        small : 0
        large : 6

        */
        int i =1;
        while (i <= large){
            if(a % i ==0 && b % i ==0){
                count = count +1;
            }
            i++;
        }
        // cout << "Count: "<< count << endl;
        return count;
}
