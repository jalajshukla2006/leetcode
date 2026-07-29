# 1. Two Sum

| Field | Value | ---|---|
| Question # | 1 | Title | Two Sum | Difficulty | Easy | Topics | Array, Hash Table | Link | 
| https://leetcode.com/problems/two-sum/description/ | Submission ID | 2083496215 | Submitted | 2026-07-27 14:42 UTC |

---

You are given an array of integers `nums` and an integer `target`, return *indices of the two numbers such that they add 
up to `target`*.

You may assume that each input would have ***exactly* one solution**, and you may not use the *same* element twice.

You can return the answer in any order.

**Example 1:**

``` Input: nums = [2,7,11,15], target = 9 Output: [0,1] Explanation: Because nums[0] + nums[1] == 9, we return [0, 1]. 
```

**Example 2:**

``` Input: nums = [3,2,4], target = 6 Output: [1,2] ```

**Example 3:**

``` Input: nums = [3,3], target = 6 Output: [0,1] ```

**Constraints:**

- `2 <= nums.length <= 104` - `-109 <= nums[i] <= 109` - `-109 <= target <= 109` - **Only one valid answer exists.**

**Follow-up:**Can you come up with an algorithm that is less than `O(n2)` time complexity?

## Hints

1. A really brute force way would be to search for all possible pairs of numbers but that would be too slow. Again, it's 
best to try out brute force solutions just for completeness. It is from these brute force solutions that you can come up 
with optimizations. 2. So, if we fix one of the numbers, say `x`, we have to scan the entire array to find the next 
number `y` which is `value - x` where value is the input parameter. Can we change our array somehow so that this search 
becomes faster? 3. The second train of thought is, without changing the array, can we use additional space somehow? Like 
maybe a hash map to speed up the search?

---

## Submission

**Status:** Accepted **Language:** C++

| Metric | Value | ---|---|
| Runtime | 38 ms (beats 28.3%) | Memory | 14 MB (beats 83.6%) | Test cases | 64 / 64 |

Solution: [`1-two-sum.cpp`](./1-two-sum.cpp)

```cpp

another solution I got . class Solution { public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a = -1, b = -1; for (int i = 0; i < nums.size()-1; i++){
            int toFind = target - nums[i]; for (int j = i+1; j < nums.size(); j++){
                if (nums[j] == toFind){ a = i; b = j;
                }
            }
        }
        return {a,b};
    }
};

```
>> ${id} + 1601 
