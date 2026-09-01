class Solution {
public:

    int bs(vector<int>& nums, int target , int left , int right){
        if(left > right) {
            return -1 ;
        }
        int mid = (left + right) / 2 ;
        if(nums[mid] > target) {
            return bs(nums , target , left , mid - 1);
        } else if (nums[mid] < target){
            return bs(nums , target , mid+1 , right);
        } else { 
            return mid;
        }
    }

    int search(vector<int>& nums, int target) {
        int l = 0 ;
        int r = nums.size() - 1 ; 
        if(r == 0 && nums[r] == target) return r; 
        int final = bs(nums , target , l , r);
        return final ;
    }
};