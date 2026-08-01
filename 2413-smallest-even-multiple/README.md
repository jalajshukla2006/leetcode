# 2413. Smallest Even Multiple

| Field | Value |
|---|---|
| Question # | 2413 |
| Title | Smallest Even Multiple |
| Difficulty | Easy |
| Topics | Math, Number Theory |
| Link | https://leetcode.com/problems/smallest-even-multiple/description/ |
| Submission ID | 2090156211 |
| Submitted | 2026-08-01 20:40 IST |

---

Given a **positive** integer `n`, return *the smallest positive integer that is a multiple of **both*** `2` *and* `n`.

**Example 1:**

```
Input: n = 5
Output: 10
Explanation: The smallest multiple of both 5 and 2 is 10.
```

**Example 2:**

```
Input: n = 6
Output: 6
Explanation: The smallest multiple of both 6 and 2 is 6. Note that a number is a multiple of itself.
```

**Constraints:**

- `1 <= n <= 150`

## Hints

1. A guaranteed way to find a multiple of 2 and n is to multiply them together. When is this the answer, and when is there a smaller answer?
2. There is a smaller answer when n is even.

---

## Submission

**Status:** Accepted  
**Language:** C++  

| Metric | Value |
|---|---|
| Runtime | 0 ms (beats 100.0%) |
| Memory | 8 MB (beats 31.9%) |
| Test cases | 150 / 150 |

Solution: [`2413-smallest-even-multiple.cpp`](./2413-smallest-even-multiple.cpp)
