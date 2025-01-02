class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        std::unordered_map<int, int> hash; // Basicallly a python dictionary
        // Store all values in hash table such as each key is
        // the element in list and value of key is the index of
        // element
        for (int i=0; i<size; i++){
            hash[nums[i]] = i;
        }

        // Find the difference in target and element and lookup in hash
        for (int i=0; i<size; i++){
            int diff = target - nums[i];
            if (hash.find(diff) != hash.end() && hash[diff] != i){
                return {i, hash[diff]};
            }
        }
        return {};
    }
};