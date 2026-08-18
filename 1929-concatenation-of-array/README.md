# 1929. Concatenation of Array

| Field | Value |
|---|---|
| Question # | 1929 |
| Title | Concatenation of Array |
| Difficulty | Easy |
| Topics | Array, Simulation |
| Link | https://leetcode.com/problems/concatenation-of-array/description/ |
| Submission ID | 2092788971 |
| Submitted | 2026-08-03 20:38 IST |

---

Given an integer array `nums` of length `n`, you want to create an array `ans` of length `2n` where `ans[i] == nums[i]` and `ans[i + n] == nums[i]` for `0 <= i < n` (**0-indexed**).

Specifically, `ans` is the **concatenation** of two `nums` arrays.

Return *the array* `ans`.

**Example 1:**

```
Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]
```

**Example 2:**

```
Input: nums = [1,3,2,1]
Output: [1,3,2,1,1,3,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[3],nums[0],nums[1],nums[2],nums[3]]
- ans = [1,3,2,1,1,3,2,1]
```

**Constraints:**

- `n == nums.length`
- `1 <= n <= 1000`
- `1 <= nums[i] <= 1000`

## Hints

1. Build an array of size 2 \* n and assign nums[i] to ans[i] and ans[i + n]

---

## Submission

**Status:** Accepted  
**Language:** C++  

| Metric | Value |
|---|---|
| Runtime | 2 ms (beats 15.8%) |
| Memory | 16.6 MB (beats 95.7%) |
| Test cases | 92 / 92 |

Solution: [`1929-concatenation-of-array.cpp`](./1929-concatenation-of-array.cpp)
