class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int h = 0;
        int w = 0;
        int p_1 = 0;
        int p_2 = height.size() - 1;

        /*
            The loop is comprised of 2 parts;
            Part 1: Here we find the height and width
            and update the area if required
            Part 2: Here we update the index depending on
            which holds the least value.
        */
        while (p_1 < p_2) {
            // Part 1
            h = std::min(height[p_1], height[p_2]);
            w = p_2 - p_1;
            if (area < (h * w)){
                area = h * w;
            }
            // Part 2
            if (height[p_1] < height[p_2]){
                p_1 ++;
            } else {
                p_2 --;
            }
        }
        return area;        
    }
};