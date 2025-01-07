# 26. Remove Duplicates from Sorted Array

## Statement
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.
Custom Judge:

The judge will test your solution with the following code:

    int[] nums = [...]; // Input array
    int[] expectedNums = [...]; // The expected answer with correct length

    int k = removeDuplicates(nums); // Calls your implementation

    assert k == expectedNums.length;
    for (int i = 0; i < k; i++) {
        assert nums[i] == expectedNums[i];
    }
If all assertions pass, then your solution will be accepted.

## Solution
- Approach: Preserve the last unique element (1st element) then loop through nums, for every repetative element remove it, else update the lat unique element to current element.
- Drawback: The question does not require removal elements, instead it wants the all unique elements to be 1st.

## Optimised Solution
- Approach: Preserve last unique element also initialise k as 1 to keep track of unique elements and loop through nums, whenever a unique element is encountered update the kth element in nums to be th unique element also update last unique element to current element and increment the value of k.
- Note: This approach instead of removing the elements, reorganises them saving time.
