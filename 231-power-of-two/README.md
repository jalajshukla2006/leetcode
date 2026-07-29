# 231. Power of Two

| Field | Value |
|---|---|
| Question # | 231 |
| Title | Power of Two |
| Difficulty | Easy |
| Topics | Math, Bit Manipulation, Recursion |
| Link | https://leetcode.com/problems/power-of-two/description/ |
| Submission ID | 2085431379 |
| Submitted | 2026-07-29 01:18 UTC |

---

Given an integer `n`, return *`true` if it is a power of two. Otherwise, return `false`*.

An integer `n` is a power of two, if there exists an integer `x` such that `n == 2x`.

**Example 1:**

```
Input: n = 1
Output: true
Explanation: 20 = 1
```

**Example 2:**

```
Input: n = 16
Output: true
Explanation: 24 = 16
```

**Example 3:**

```
Input: n = 3
Output: false
```

**Constraints:**

- `-231 <= n <= 231 - 1`

**Follow up:** Could you solve it without loops/recursion?

---

## Submission

**Status:** Accepted  
**Language:** C++  

| Metric | Value |
|---|---|
| Runtime | 0 ms (beats 100.0%) |
| Memory | 7.9 MB (beats 50.4%) |
| Test cases | 1110 / 1110 |

Solution: [`231-power-of-two.cpp`](./231-power-of-two.cpp)

## Failed Attempt:
>> 1107 / 1110 testcases passed
>> ID 2085429639
```cpp
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = (n&(n-1));
        if(n == 0){
            return false;
        }
        if(ans == 0){
            return true;
        }
        else{
            return false;
        }
    }
};

Runtime Error
1107 / 1110 testcases passed
submitted at Jul 29, 2026 06:43

```