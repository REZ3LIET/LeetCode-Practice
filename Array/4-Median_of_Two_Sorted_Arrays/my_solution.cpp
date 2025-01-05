class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int total_len = nums1.size() + nums2.size();
        int p_1 = 0;
        int p_2 = 0;
        int median_idx = total_len / 2;
        std::unordered_map<int, int> merged_hash;
        int val_cnt = 0;
        int val_1;
        int val_2;

        while (true){
            if (p_1 < nums1.size() && p_2 < nums2.size()) {
                val_1 = nums1[p_1];
                val_2 = nums2[p_2];

                if (val_1 < val_2) {
                    merged_hash[val_cnt] = val_1;
                    p_1 ++;
                } else {
                    merged_hash[val_cnt] = val_2;
                    p_2 ++;
                }
            } else if (p_1 >= nums1.size() && p_2 < nums2.size()) {
                merged_hash[val_cnt] = nums2[p_2];
                p_2 ++;
            } else if (p_1 < nums1.size() && p_2 >= nums2.size()) {
                merged_hash[val_cnt] = nums1[p_1];
                p_1 ++;
            } else {
                break;
            }

            if (val_cnt >= median_idx) {
                break;
            } else {
                val_cnt ++;
            }
        }

        if (total_len % 2 == 0) {
            return (merged_hash[median_idx] + merged_hash[median_idx - 1]) / 2.0;
        }
        return merged_hash[median_idx];
    }
};