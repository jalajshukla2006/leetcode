# 1480. Running Sum of 1d Array

| Field | Value |
|---|---|
| Question # | 1480 |
| Title | Running Sum of 1d Array |
| Difficulty | Easy |
| Topics | Array, Prefix Sum |
| Link | https://leetcode.com/problems/running-sum-of-1d-array/description/ |
| Submission ID | 2101775165 |
| Submitted | 2026-08-10 21:32 IST |

---

Given an array `nums`. We define a running sum of an array as `runningSum[i] = sum(nums[0]…nums[i])`.

Return the running sum of `nums`.

**Example 1:**

```
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
```

**Example 2:**

```
Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
```

**Example 3:**

```
Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
```

**Constraints:**

- `1 <= nums.length <= 1000`
- `-10^6 <= nums[i] <= 10^6`

## Hints

1. Think about how we can calculate the i-th number in the running sum from the (i-1)-th number.

---

## Submission

**Status:** Accepted  
**Language:** C++  

| Metric | Value |
|---|---|
| Runtime | 0 ms (beats 100.0%) |
| Memory | 12.6 MB (beats 13.1%) |
| Test cases | 54 / 54 |

Solution: [`1480-running-sum-of-1d-array.cpp`](./1480-running-sum-of-1d-array.cpp)
