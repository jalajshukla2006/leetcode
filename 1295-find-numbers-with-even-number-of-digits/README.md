# 1295. Find Numbers with Even Number of Digits

| Field | Value |
|---|---|
| Question # | 1295 |
| Title | Find Numbers with Even Number of Digits |
| Difficulty | Easy |
| Topics | Array, Math |
| Link | https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/ |
| Submission ID | 2085601506 |
| Submitted | 2026-07-29 05:14 UTC |

---

Given an array `nums` of integers, return how many of them contain an **even number** of digits.

**Example 1:**

```
Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.
```

**Example 2:**

```
Input: nums = [555,901,482,1771]
Output: 1 
Explanation: 
Only 1771 contains an even number of digits.
```

**Constraints:**

- `1 <= nums.length <= 500`
- `1 <= nums[i] <= 105`

## Hints

1. How to compute the number of digits of a number ?
2. Divide the number by 10 again and again to get the number of digits.

---

## Submission

**Status:** Accepted  
**Language:** C++  

| Metric | Value |
|---|---|
| Runtime | 0 ms (beats 100.0%) |
| Memory | 13.7 MB (beats 19.2%) |
| Test cases | 105 / 105 |

Solution: [`1295-find-numbers-with-even-number-of-digits.cpp`](./1295-find-numbers-with-even-number-of-digits.cpp)

```
```
Digit Length (Y)
  ^
4 |                                                [1000 - 9999] -> 4 Digits
  |                                                +-------------------------
3 |                                  [100 - 999]   |
  |                                  +-------------+
2 |                     [10 - 99]    |
  |                     +------------+
1 | [0]   [1 - 9]       |
  |  +----+-------------+
0 +--+----+-------------+------------+------------+------------+------------->
  0  1    10            100          1000         10000        100000   Value (X)
     <-------- 1D ------><--- 2D ---><---- 3D ---><---- 4D ---> (Log Scale)

```

```
Visual Breakdown of the Text GraphX-Axis Scaling: 
The horizontal axis moves by orders of magnitude (multiples of 10) because log10 scales logarithmically.
The Steps:
The flat plateaus represent ranges where all numbers share the exact same digit count.
The Transitions: 
At exactly 10, 100, and 1000, the output cleanly steps up to the next integer value.
```
**Length = floor( log10( abs(x) ) ) + 1
**
> Mathematical way to calculate the length of the int used in this question.