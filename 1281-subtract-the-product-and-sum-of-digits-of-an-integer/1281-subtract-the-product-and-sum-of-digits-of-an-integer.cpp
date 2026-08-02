class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int mul = 1;
        while (n != 0) {
            int last = n % 10;
            sum = sum + last;
            mul = mul * last;
            n = n / 10;
        }
        return (mul - sum);
    }
};
