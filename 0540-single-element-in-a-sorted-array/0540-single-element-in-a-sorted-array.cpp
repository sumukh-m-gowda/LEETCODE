class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int final = 0;
        if(nums.size() == 1){
            return nums[0];
        }
        for(int i = 1 ; i < nums.size() ; i = i + 2 ) {
            if(i > nums.size()){
                return nums[i];
            } 
            if(nums[i-1] != nums[i]){
                final = nums[i-1];
                break;
            }
            if(i == nums.size() - 2) {
                return nums[i+1];
            }
            
        }
        return final;
    }
};