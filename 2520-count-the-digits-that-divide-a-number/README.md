# 2520. Count the Digits That Divide a Number

| Field | Value |
|---|---|
| Question # | 2520 |
| Title | Count the Digits That Divide a Number |
| Difficulty | Easy |
| Topics | Math |
| Link | https://leetcode.com/problems/count-the-digits-that-divide-a-number/description/ |
| Submission ID | 2092708846 |
| Submitted | 2026-08-03 19:38 IST |

---

Given an integer `num`, return *the number of digits in `num` that divide* `num`.

An integer `val` divides `nums` if `nums % val == 0`.

**Example 1:**

```
Input: num = 7
Output: 1
Explanation: 7 divides itself, hence the answer is 1.
```

**Example 2:**

```
Input: num = 121
Output: 2
Explanation: 121 is divisible by 1, but not 2. Since 1 occurs twice as a digit, we return 2.
```

**Example 3:**

```
Input: num = 1248
Output: 4
Explanation: 1248 is divisible by all of its digits, hence the answer is 4.
```

**Constraints:**

- `1 <= num <= 109`
- `num` does not contain `0` as one of its digits.

## Hints

1. Use mod by 10 to retrieve the least significant digit of the number
2. Divide the number by 10, then round it down so that the second least significant digit becomes the least significant digit of the number
3. Use your language’s mod operator to see if a number is a divisor of another.

---

## Submission

**Status:** Accepted  
**Language:** C++  

| Metric | Value |
|---|---|
| Runtime | 0 ms (beats 100.0%) |
| Memory | 7.9 MB (beats 42.2%) |
| Test cases | 56 / 56 |

Solution: [`2520-count-the-digits-that-divide-a-number.cpp`](./2520-count-the-digits-that-divide-a-number.cpp)

# Note 
- Although the submission in leetcode is successful but think Really !!
- In your approach you neglected one case . What if num % 0 i.e val =0; this will cause error.
> Leetcode Submission
```cpp
class Solution {
public:
    int countDigits(int num) {
        int n = num;
        int count = 0;
        for(int i=0; n !=0; i++){ 
            int val = n%10;
            if(num % val == 0){  // Here there will be error if the number is zero i.e val = 0; 
                count ++;
            }
            n = n /10;
        }
        return count;
        
    }
};
```
## At local test 
```cpp
#include<iostream>
using namespace std;
int main(){
    int num = 1021;
    int n = num;
    int count = 0;
        for (int i=0; n !=0; i++){
            int val = n % 10;
            //cout << "val: "<< val << endl;
            if(num % val == 0){
                count = count + 1;
            }
            n = n / 10;

        }
        cout << "count : "<< count << endl;
        return 0;
}
```
```
Output: 
~$: g++ countDigits.cpp -o countDigits && ./countDigits 
Floating point exception (core dumped)
```
> Just ignore 0 digits.
```cpp
 if (val != 0 && num % val == 0) {
                count++;
            }
```

## Other things like
```
Why to use while instead of for?
================================

for (int i = 0; n != 0; i++) // works, but i is never used. 

A while loop expresses the intent more clearly

while (n != 0) {
    ...
}

```
- Complexity: 
    - Time: O(log10n) — one iteration per digit.
    - Space: O(1).

