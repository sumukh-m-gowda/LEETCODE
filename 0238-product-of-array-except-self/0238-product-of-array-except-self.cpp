class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int zerocount = 0 ;
        int realprod = 1;
        vector<int> final(nums.size(), 0);
        for (int i = 0 ; i < nums.size() ; i++) {
            product = product*nums[i];
            if(nums[i] == 0) {
                
                zerocount++;
                if(zerocount > 1){
                    product = 0;
                    break;
                }
            }else {
                realprod = realprod*nums[i];
            }
        }
        if(zerocount > 1){
            return final;
        }
        if(zerocount == 0 || zerocount == 1){
            for (int i = 0 ; i < nums.size() ; i++) {
                if(nums[i] == 0) {
                    nums[i] = realprod;
                } else {
                    nums[i] = product / nums[i];
                }
            }
        } else {
            return final;
        }
        return nums ;

    }
};