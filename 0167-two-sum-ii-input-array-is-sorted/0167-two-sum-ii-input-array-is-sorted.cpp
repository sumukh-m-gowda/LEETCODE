class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int l = 0 ;
        int r = num.size() - 1 ;
        vector<int> final;
        while (r > l) {
            int sum = num[l] + num[r];
            if(sum > target){
                r--;
            } else if (sum < target) {
                l++;
            } else {
                final.push_back(l+1);
                final.push_back(r+1);
                break;
            }
        }
        return final ;
    }
};