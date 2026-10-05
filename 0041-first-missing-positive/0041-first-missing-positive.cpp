class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> check(n+1) ;
        // int count = 0 ;
        // int sum = 0;
        // int one = 0;
        // for(int i = 0 ; i < n ; i++) {
        //     if(nums[i] == 1){
        //         one = 1;
        //     }
        //     if(nums[i] > 0){
        //         sum += nums[i];
        //         count++;
        //     }
        // }
        // if(one == 0) {
        //     return 1;
        // }
        // count++;
        // int up = count * (count + 1);
        // int tot = up / 2 ;
        // return tot - sum ;
        int final ;
        for (int i = 0 ; i < n ; i++) {
            if(nums[i] >= 1 && nums[i] <= n){
                check[nums[i]] = nums[i];

            }
        }
        for(int i = 1 ; i < n+1 ; i++) {
            if(check[i] != i){
                final = i;
                break;
            }
        }
        return final;
    }
};