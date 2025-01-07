class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 1) {
            return 1;
        }
        int last_element = nums[0];
        int e_id = 1;
        int k = 1;
        while (e_id < nums.size()){
            int curr_element = nums[e_id];
            if (curr_element != last_element) {
                last_element = curr_element;
                nums[k] = curr_element;  // Update kth element to unique element
                k++;
            }
            e_id++;
        }
        return k;
    }
};