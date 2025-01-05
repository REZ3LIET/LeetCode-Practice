# 4. Median of Two Sorted Arrays

## Statement
    Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
    The overall run time complexity should be O(log (m+n)).

    Example 1:
    Input: nums1 = [1,3], nums2 = [2]
    Output: 2.00000
    Explanation: merged array = [1,2,3] and median is 2.
    
    Example 2:
    Input: nums1 = [1,2], nums2 = [3,4]
    Output: 2.50000
    Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
    

    Constraints:
    nums1.length == m
    nums2.length == n
    0 <= m <= 1000
    0 <= n <= 1000
    1 <= m + n <= 2000
    -106 <= nums1[i], nums2[i] <= 106

## My Solution (Hash Tables)
- Approach:
    1. First calculate the total length of merged array and the median_idx from it.
    2. Initialise two index pointers for both nums1 and nums2 as 0, also initialse a hash table and a value counter [val_cnt] to keep track of elements in hash table.
    3. While looping through the elements of of nums1 and nums2 check if the indices are less than there respective sizes and compare their values.
    4. If the value of nums1[p_1] is less than nums[p_2] then, add that value to hash table and increment p_1 and vice - verca.
    5. After adding the elements to hash table increment the value of val_cnt
    6. When val_cnt crosses median_idx then brak from the loop.
    7. Calculate the median value and return it.

- Time Complexity: O(m + n)
