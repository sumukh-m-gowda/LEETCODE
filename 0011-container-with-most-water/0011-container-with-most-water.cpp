class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0 ; 
        int right = height.size() - 1 ;
        int maxx = 0;
        while (right > left) {
            int max = (right - left) * min(height[left] , height[right]);
            if (max > maxx){
                maxx = max;
            }
            if (height[left] > height[right]) {
                right--;
            } else {
            // } if else {
            //     left++;
            // } else {
                left++;
            }
                        

        }
        return maxx;
    }
};