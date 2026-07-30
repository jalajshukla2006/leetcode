# 412. Fizz Buzz

| Field | Value |
|---|---|
| Question # | 412 |
| Title | Fizz Buzz |
| Difficulty | Easy |
| Topics | Math, String, Simulation |
| Link | https://leetcode.com/problems/fizz-buzz/description/ |
| Submission ID | 2080478371 |
| Submitted | 2026-07-25 08:11 UTC |

---

Given an integer `n`, return *a string array* `answer` *(**1-indexed**) where*:

- `answer[i] == "FizzBuzz"` if `i` is divisible by `3` and `5`.
- `answer[i] == "Fizz"` if `i` is divisible by `3`.
- `answer[i] == "Buzz"` if `i` is divisible by `5`.
- `answer[i] == i` (as a string) if none of the above conditions are true.

**Example 1:**

```
Input: n = 3
Output: ["1","2","Fizz"]
```

**Example 2:**

```
Input: n = 5
Output: ["1","2","Fizz","4","Buzz"]
```

**Example 3:**

```
Input: n = 15
Output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]
```

**Constraints:**

- `1 <= n <= 104`

---

## Submission

**Status:** Accepted  
**Language:** C++  

| Metric | Value |
|---|---|
| Runtime | 2 ms (beats 44.0%) |
| Memory | 11.9 MB (beats 18.4%) |
| Test cases | 8 / 8 |

Solution: [`412-fizz-buzz.cpp`](./412-fizz-buzz.cpp)


### Followed a new way of string concatination and while loop

```cpp


class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        //res.reserve(n); // Optimization: Pre-allocate memory to avoid resizing
        int i = 1;
        while ( i <= n ) {
            string current_str = "";
            
            if (i % 3 == 0) {
                current_str += "Fizz";
            }
            if (i % 5 == 0) {
                current_str += "Buzz";
            }
            if (current_str.empty()) {
                current_str = to_string(i);
            }
            
            res.push_back(current_str);
            i++;
        }
        
        return res;
    }
};

```
