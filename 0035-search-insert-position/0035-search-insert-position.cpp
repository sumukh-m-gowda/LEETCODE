class Solution {
public:

    int bs(vector<int>& nums, int target, int left, int right) {

        if (left == right) {
            return left;
        }

        int mid = left + (right - left) / 2;

        if (nums[mid] >= target) {
            return bs(nums, target, left, mid);
        }
        else {
            return bs(nums, target, mid + 1, right);
        }
    }

    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();

        if (target > nums[n - 1]) {
            return n;
        }

        return bs(nums, target, 0, n - 1);
    }
};