class Solution {
public:
    int trap(vector<int>& h) {
        int left = 0;
        int right = h.size() - 1;

        int maxleft = 0;
        int maxright = 0;
        int sum = 0;

        while (left < right) {
            if (h[left] < h[right]) {
                if (h[left] >= maxleft) {
                    maxleft = h[left];
                } else {
                    sum += maxleft - h[left];
                }
                left++;
            } else {
                if (h[right] >= maxright) {
                    maxright = h[right];
                } else {
                    sum += maxright - h[right];
                }
                right--;
            }
        }

        return sum;
    }
};