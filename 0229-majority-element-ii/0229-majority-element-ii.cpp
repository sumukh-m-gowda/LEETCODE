class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size() ;
        int app = n/3;
        int count;
        sort(nums.begin() , nums.end());
        for (int i = 0 ; i < nums.size() ; ) {
            count = 0;
            int val = nums[i];
            while( i < nums.size() && nums[i] == val ){
                i++;
                count++;
            }
            if(count > app) {
                ans.push_back(val);
            }
        }
        return ans;
    }
};