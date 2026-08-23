class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> newww(nums1.size() + nums2.size());
        for (int i = 0 ; i < nums1.size() + nums2.size()  ; i++) {
            if(i < nums1.size()){
                newww[i] = nums1[i];
            } else {
                newww[i] = nums2[i - nums1.size()];
            }
        }
        sort(newww.begin() , newww.end());
        double final;
        if(newww.size() % 2 == 0){
            int mid = newww.size() / 2;
            final = (newww[mid - 1] + newww[mid]) / 2.0;
        } else {
            int mid = newww.size() / 2;
            final = newww[mid];
        }
        return final;

    }
};