# 1. Two Sum

## Statement
    Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

    You may assume that each input would have exactly one solution, and you may not use the same element twice.

    You can return the answer in any order.

    Example 1:

    Input: nums = [2,7,11,15], target = 9
    Output: [0,1]
    Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
    Example 2:

    Input: nums = [3,2,4], target = 6
    Output: [1,2]
    Example 3:

    Input: nums = [3,3], target = 6
    Output: [0,1]
    

    Constraints:

    2 <= nums.length <= 104
    -109 <= nums[i] <= 109
    -109 <= target <= 109
    Only one valid answer exists.
    

    Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?

## My Solution (Brute Force)
- Approach: Nested loop through nums to check if `target == nums[i] + nums[j]`
- Time Complexity: O(n^2)

## Checked Solution(s)
Utilizing **Hash Tables** as they have fast lookup, deletion and insertion time [O(1)] in *most cases*.
- Approach:
    1. Create a hash table which is `std::unordered_map<int, int>` in C++. Store the elements of nums as keys ans their index as values.
    2. Now find the difference between the target and element by looping through nums.
    3. Lookup this difference in the hash table and make sure its not the end, as well as confirm that the value of this in not the current index.
- Learnings:
    1. Hash Table
    2. std::unordered_map

## My Solution (Optimizing on Hash Tables)
- Approach:
    1. Find the difference between the target and element by looping through nums.
    2. Lookup this difference in the hash table and make sure its not the end, as well as confirm that the value of this in not the current index.
    3. If the difference is present return the values else, add this element to hash.

- Additional improvements:
    1. No need to confirm if the value of hash has same index or not.
