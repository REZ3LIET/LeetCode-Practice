# 1. Container With Most Water

## Statement
    You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
    Find two lines that together with the x-axis form a container, such that the container contains the most water.
    Return the maximum amount of water a container can store.
    Notice that you may not slant the container.


![IMAGE](https://s3-lc-upload.s3.amazonaws.com/uploads/2018/07/17/question_11.jpg)

    Example 1:
    Input: height = [1,8,6,2,5,4,8,3,7]
    Output: 49
    Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

    Example 2:
    Input: height = [1,1]
    Output: 1
    

    Constraints:
    n == height.length
    2 <= n <= 105
    0 <= height[i] <= 104

## Solution
- Approach: Given a list with n values,we start at the ends of the list and move inwards while updating the max area.
The rule to follow while moving inwards is the index with least value is the one which is updated closer to the other index.
As in Example 1 we'll start with indexes as p_1 = 0 and p_2 = 8. As the value of height[p_1] is less than height[p_2] we update p_1
closer to p_2 (p_1++). If it were the reverse then we will update p_2 (p_2--).

