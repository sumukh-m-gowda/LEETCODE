class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        unordered_map<long long , int> mpp;
        int count = 0 ;
        long long sum = 0 ;
        for (int i = 0 ; i < nums.size() ; i++) {
            sum = sum + nums[i];

            if(sum == k) {
                count++ ;
            }
            if(mpp.find(sum - k) != mpp.end()){
                count = count + mpp[sum-k];
            }
            mpp[sum]++;

        }
        return count;

    }
};