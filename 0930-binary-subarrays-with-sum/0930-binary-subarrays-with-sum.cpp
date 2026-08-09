class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        unordered_map<long long, int> mpp;

        int count = 0;
        long long sum = 0;

        for (int i = 0; i < nums.size(); i++) {

            sum += nums[i];

            if (sum == goal) {
                count++;
            }

            if (mpp.find(sum - goal) != mpp.end()) {
                count += mpp[sum - goal];
            }

            mpp[sum]++;
        }

        return count;
    }
};