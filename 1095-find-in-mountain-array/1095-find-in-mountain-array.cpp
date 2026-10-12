
class Solution {
public:
    int findInMountainArray(int target, MountainArray &mou) {
        int n = mou.length();
        int left = 0, right = n - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (mou.get(mid) < mou.get(mid + 1)) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        int peak = left;

        left = 0;
        right = peak;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int val = mou.get(mid);

            if (val == target) return mid;
            else if (val < target) left = mid + 1;
            else right = mid - 1;
        }

        left = peak + 1;
        right = n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int val = mou.get(mid);

            if (val == target) return mid;
            else if (val > target) left = mid + 1;
            else right = mid - 1;
        }

        return -1;
    }
};
