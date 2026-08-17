class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i = nums.size() - 1 ; i >= 0 ; i--) {
            int isswap = 0 ; 
            for (int j = 0 ; j <= i - 1 ; j++) {
                if(nums[j] > nums[j+1]){
                    isswap = 1;
                    int temp = nums[j];
                    nums[j] = nums[j+1] ;
                    nums[j+1] = temp;
                }
            }
            if(isswap == 0) {
                break;
            }
        }

    }
};