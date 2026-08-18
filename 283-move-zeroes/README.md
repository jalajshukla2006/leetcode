# 283. Move Zeroes

| Field | Value |
|---|---|
| Question # | 283 |
| Title | Move Zeroes |
| Difficulty | Easy |
| Topics | Array, Two Pointers |
| Link | https://leetcode.com/problems/move-zeroes/description/ |
| Submission ID | 2107341444 |
| Submitted | 2026-08-15 12:30 IST |

---

Given an integer array `nums`, move all `0`'s to the end of it while maintaining the relative order of the non-zero elements.

**Note** that you must do this in-place without making a copy of the array.

**Example 1:**

```
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
```

**Example 2:**

```
Input: nums = [0]
Output: [0]
```

**Constraints:**

- `1 <= nums.length <= 104`
- `-231 <= nums[i] <= 231 - 1`

**Follow up:** Could you minimize the total number of operations done?

## Hints

1. **In-place** means we should not be allocating any space for extra array. But we are allowed to modify the existing array. However, as a first step, try coming up with a solution that makes use of additional space. For this problem as well, first apply the idea discussed using an additional array and the in-place solution will pop up eventually.
2. A **two-pointer** approach could be helpful here. The idea would be to have one pointer for iterating the array and another pointer that just works on the non-zero elements of the array.

---

## Submission

**Status:** Accepted  
**Language:** C++  

| Metric | Value |
|---|---|
| Runtime | 1 ms (beats 17.6%) |
| Memory | 25.1 MB (beats 5.6%) |
| Test cases | 75 / 75 |

Solution: [`283-move-zeroes.cpp`](./283-move-zeroes.cpp)
