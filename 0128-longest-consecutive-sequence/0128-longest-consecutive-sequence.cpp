class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        if(nums.size() == 0){
            return 0;
        }
        int maxi = 1 ;
        int maxiii = 1 ;
        for (int i = 1 ; i < nums.size() ; i++) {
            if(nums[i-1] + 1 == nums[i]){
                maxi++ ;
            } else if (nums[i-1] == nums[i]){
                maxi = maxi ;
            } else { 
                maxi = 1 ;
            }
            maxiii = max(maxi , maxiii);

        }
        return maxiii;
    }
};