# 1281. Subtract the Product and Sum of Digits of an Integer

| Field | Value |
|---|---|
| Question # | 1281 |
| Title | Subtract the Product and Sum of Digits of an Integer |
| Difficulty | Easy |
| Topics | Math |
| Link | https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/ |
| Submission ID | 2091513072 |
| Submitted | 2026-08-02 20:34 IST |

---

Given an integer number `n`, return the difference between the product of its digits and the sum of its digits.

**Example 1:**

```
Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15
```

**Example 2:**

```
Input: n = 4421
Output: 21
Explanation: 
Product of digits = 4 * 4 * 2 * 1 = 32 
Sum of digits = 4 + 4 + 2 + 1 = 11 
Result = 32 - 11 = 21
```

**Constraints:**

- `1 <= n <= 10^5`

## Hints

1. How to compute all digits of the number ?
2. Use modulus operator (%) to compute the last digit.
3. Generalise modulus operator idea to compute all digits.

---

## Submission

**Status:** Accepted  
**Language:** C++  

| Metric | Value |
|---|---|
| Runtime | 0 ms (beats 100.0%) |
| Memory | 8 MB (beats 0.7%) |
| Test cases | 123 / 123 |

## Algorithm

```text
                 ┌──────────────┐
                 │    START     │
                 └──────┬───────┘
                        │
                        ▼
         ┌───────────────────────────┐
         │ Input number N            │
         │ (Given by LeetCode)       │
         └──────────┬────────────────┘
                    │
                    ▼
         ┌───────────────────────────┐
         │ sum = 0                   │
         │ product = 1               │
         └──────────┬────────────────┘
                    │
                    ▼
            ┌─────────────────┐
            │ Is N != 0 ?     │
            └──────┬─────┬────┘
                   │Yes  │No
                   ▼     ▼
      ┌─────────────────┐   ┌────────────────────┐
      │ last = last     │   │ answer = product   │
      │ digit of N      │   │          - sum     │
      └────────┬────────┘   └─────────┬──────────┘
               │                      │
               ▼                      ▼
      ┌─────────────────┐    ┌──────────────────┐
      │ sum += last     │    │ Display answer   │
      └────────┬────────┘    └────────┬─────────┘
               │                      │
               ▼                      ▼
      ┌─────────────────┐      ┌──────────────┐
      │ product *= last │      │     STOP     │
      └────────┬────────┘      └──────────────┘
               │
               ▼
      ┌─────────────────┐
      │ Remove last     │
      │ digit from N    │
      └────────┬────────┘
               │
               └───────────────► Back to
                                "Is N != 0?"
```

### Step-by-Step Algorithm

1. **Start**

2. **Input**
   - Take the given number `N`.
   - *(In LeetCode, `N` is already provided.)*

3. **Initialize**
   - `sum = 0`
   - `product = 1`

4. **Repeat while `N != 0`**
   - Extract the last digit of `N`.
   - Add the digit to `sum`.
   - Multiply the digit with `product`.
   - Remove the last digit from `N`.

5. **Compute**
   - `answer = product - sum`

6. **Display**
   - Print/return the answer.

7. **Stop**

Solution: [`1281-subtract-the-product-and-sum-of-digits-of-an-integer.cpp`](./1281-subtract-the-product-and-sum-of-digits-of-an-integer.cpp)
