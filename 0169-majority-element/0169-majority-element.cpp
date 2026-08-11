class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int count = 0; 
        int n = nums.size();
        if(n == 1) {
            return nums[0];
        }
        for (int i = 1 ; i < nums.size()  ; i++) {
            if(nums[i - 1] == nums[i]){
                count++;
            } else {
                count = 0 ;
            }
            if(count >= n/2) {
                return nums[i];
            }
        }
        return 0 ;
    }
};