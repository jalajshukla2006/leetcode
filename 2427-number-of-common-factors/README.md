# 2427. Number of Common Factors

| Field | Value |
|---|---|
| Question # | 2427 |
| Title | Number of Common Factors |
| Difficulty | Easy |
| Topics | Math, Enumeration, Number Theory |
| Link | https://leetcode.com/problems/number-of-common-factors/description/ |
| Submission ID | 2091555342 |
| Submitted | 2026-08-02 21:12 IST |

---

Given two positive integers `a` and `b`, return *the number of **common** factors of* `a` *and* `b`.

An integer `x` is a **common factor** of `a` and `b` if `x` divides both `a` and `b`.

**Example 1:**

```
Input: a = 12, b = 6
Output: 4
Explanation: The common factors of 12 and 6 are 1, 2, 3, 6.
```

**Example 2:**

```
Input: a = 25, b = 30
Output: 2
Explanation: The common factors of 25 and 30 are 1, 5.
```

**Constraints:**

- `1 <= a, b <= 1000`

## Hints

1. For each integer in range [1,1000], check if it’s divisible by both A and B.

---

## Submission

**Status:** Accepted  
**Language:** C++  

| Metric | Value |
|---|---|
| Runtime | 0 ms (beats 100.0%) |
| Memory | 7.9 MB (beats 52.5%) |
| Test cases | 76 / 76 |


# LeetCode 2427 — Mistakes I Made

---

## 1. Infinite Loop

### Code

```cpp
while(i <= small){
    if(...)
        ...
}
i++;
```

### Error

- `i++` was placed **outside** the loop.
- Since `i` never changed inside the loop, the condition `i <= small` was always true.
- The program never exited the loop.

**Lesson**

> Every loop whose condition depends on a variable must update that variable inside the loop.

---

## 2. Wrong Starting Value (`i = 0`)

### Code

```cpp
int i = 0;
```

### Error

- Started checking from `0`.
- `0` is not a valid factor.
- Later, the program evaluated:

```cpp
a % i
```

which becomes

```cpp
a % 0
```

causing a runtime error (division/modulo by zero).

**Lesson**

> Never use `0` as the divisor in `%` or `/`.

---

## 3. Wrong Direction of Divisibility

### Code

```cpp
if(i % a == 0)
```

### Error

This asks:

> Is **i divisible by a?**

The problem asks:

> Does **i divide a?**

Correct thinking:

```text
a % i == 0
```

means

> i is a factor of a.

**Lesson**

Remember:

```text
Dividend % Divisor == 0
```

The **divisor** is the factor.

---

## 4. Using OR Instead of AND

### Code

```cpp
if(a % i == 0 || b % i == 0)
```

### Error

Using `||` counts numbers that divide **either** number.

Example:

```
a = 12
b = 18
i = 4

12 % 4 == 0 ✔
18 % 4 == 2 ✘
```

With `||`, `4` would still be counted.

But `4` is **not** a common factor.

**Lesson**

> A common factor must satisfy **both** conditions.

---

## 5. Misunderstood the Word "Common"

### Thinking

I initially searched for

> Factors of `a`
>
> OR
>
> Factors of `b`

The problem actually asks for

> Factors shared by **both** numbers.

**Lesson**

Always identify the keyword in the problem statement.

```
Common
Both
Shared
Intersection
```

---

## 6. Wrong Placement of `i++`

### Code

```cpp
while(...){
    ...
}

i++;
```

### Error

The increment happened only **after** the loop finished.

But the loop could never finish without incrementing `i`.

**Lesson**

The update step belongs inside the loop.

---

## 7. Assignment vs Comparison

### Code

```cpp
while(n = 0)
```

### Error

`=` assigns.

`==` compares.

The statement first changes

```
n = 0
```

and then evaluates the condition.

**Lesson**

```
=
Assignment

==
Comparison
```

---

## 8. Redundant Statement

### Code

```cpp
while(n != 0){
    ...
    n = n / 10;
}

n = n / 10;
```

### Error

When the loop exits,

```
n == 0
```

Therefore,

```
0 / 10 = 0
```

The extra statement changes nothing.

**Lesson**

Remove code that has no effect.

---

## 9. Reading `%` Incorrectly

### Wrong Thinking

```cpp
i % a == 0
```

Meaning:

> Is `i` a multiple of `a`?

### Correct Thinking

```cpp
a % i == 0
```

Meaning:

> Is `i` a factor of `a`?

**Lesson**

Always read modulo aloud.

```
a % b == 0

↓

b divides a
```

---

# Final Lessons

- Update loop variables inside the loop.
- Never divide or take modulo by `0`.
- Read `%` from right to left:
  ```
  a % b == 0
  ```
  means
  ```
  b divides a
  ```
- Understand words like:
  - Factor
  - Multiple
  - Common
  - Divisible
- Choose `&&` or `||` based on the problem statement.
- Dry-run with small inputs before submitting.
- If a loop depends on a variable, ensure that variable changes every iteration.
- If code executes after a loop, first ask:
  > "Can the program ever reach this line?"

  
Solution: [`2427-number-of-common-factors.cpp`](./2427-number-of-common-factors.cpp)

## New Approach Optimized !!
In the above Solution I checked the each Number is divisible or not:
> "Does it divide both numbers?"
- This works, but imagine:
```cpp
a = 999983
b = 999979

int count=0;
        int small = min(a,b);
        int i=1;
        while(i<= small){
            if(a %i ==0 && b%i==0){
                count = count+1;
            }
            i++;
        }
        
        return count;

It would perform almost one million checks.
```

```text
Given:
a
b

        │
        ▼
Find HCF (GCD)
        │
        ▼
Suppose HCF = d
        │
        ▼
Find all factors of d
        │
        ▼
Count them

```

```cpp
class Solution {
public:
    int commonFactors(int a, int b) {
        int count=0;
        int small = min(a,b);
        int large = max(a,b);
        while(small !=0){
            int temp = large % small;
            large = small;
            small = temp;
            // count = count + 1;
           // cout <<"temp inner: "<< temp << endl;
        }
        // cout << "count : "<< count << endl;
        // cout << "small : "<< small << endl;
        // cout << "large : "<< large << endl;


        /*
        DRY RUN:

        >>> 48%18
            12
        >>> 18%12
            6
        >>> 12%6
            0 

        */
        /*
        OUTPUT:
        temp inner: 12
        temp inner: 6
        temp inner: 0
        count : 3
        small : 0
        large : 6

        */
        // HCF = large

        int i =1;
        while (i <= large){
            if(a % i ==0 && b % i ==0){
                count = count +1;
            }
            i++;
        }
        // cout << "Count: "<< count << endl;
        return count;
    }
    
};
```
