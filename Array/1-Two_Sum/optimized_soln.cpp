class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        std::unordered_map<int, int> hash; // Basicallly a python dictionary

        // Check if the element exists in hash if not, add that element to hash
        for (int i=0; i<size; i++){
            int diff = target - nums[i];
            if (hash.find(diff) != hash.end() && hash[diff] != i){
                return {i, hash[diff]};
            } else {
                hash[nums[i]] = i;
            }
        }
        return {};
    }
};