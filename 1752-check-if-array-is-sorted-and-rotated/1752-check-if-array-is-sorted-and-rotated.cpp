class Solution {
public:
    bool check(vector<int>& nums) {
        int wro = 0 ; 
        for (int i = 0 ; i < nums.size(); i++) {
            if(nums[i] > nums[(i+1)%nums.size()]){
                wro++;
            }
        }
        if(wro > 1){
            return 0;
        }
        return 1 ;
    }
};