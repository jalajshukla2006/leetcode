# 136. Single Number

| Field | Value |
|---|---|
| Question # | 136 |
| Title | Single Number |
| Difficulty | Easy |
| Topics | Array, Bit Manipulation |
| Link | https://leetcode.com/problems/single-number/description/ |
| Submission ID | 2081569177 |
| Submitted | 2026-07-26 05:24 UTC |

---

Given a **non-empty** array of integers `nums`, every element appears *twice* except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

**Example 1:**

**Input:** nums = [2,2,1]

**Output:** 1

**Example 2:**

**Input:** nums = [4,1,2,1,2]

**Output:** 4

**Example 3:**

**Input:** nums = [1]

**Output:** 1

**Constraints:**

- `1 <= nums.length <= 3 * 104`
- `-3 * 104 <= nums[i] <= 3 * 104`
- Each element in the array appears twice except for one element which appears only once.

## Hints

1. Think about the XOR (^) operator's property.

---

## Submission

**Status:** Accepted  
**Language:** C++  

| Metric | Value |
|---|---|
| Runtime | 0 ms (beats 100.0%) |
| Memory | 20.7 MB (beats 24.4%) |
| Test cases | 61 / 61 |

Solution: [`136-single-number.cpp`](./136-single-number.cpp)
