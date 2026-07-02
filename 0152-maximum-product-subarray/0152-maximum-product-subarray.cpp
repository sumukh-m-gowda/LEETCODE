class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxSoFar = nums[0];
        int minSoFar = nums[0];
        int result   = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int temp = maxSoFar;

            maxSoFar = max({nums[i], maxSoFar * nums[i], minSoFar * nums[i]});
            minSoFar = min({nums[i], temp    * nums[i], minSoFar * nums[i]});

            result = max(result, maxSoFar);
        }

        return result;
    }
};