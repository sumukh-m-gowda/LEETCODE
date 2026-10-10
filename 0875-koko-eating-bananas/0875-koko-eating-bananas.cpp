class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int n = piles.size();
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        if (piles.size() == h) {
            return high ;
        }
        
        while (high > low) {
            int mid = low + ((high - low)/2);
            long long hour = 0 ;
            for (int i = 0 ; i < n ; i++ ) {
                int sum;
                if(piles[i]%mid == 0){
                    sum = piles[i]/mid;
                } else {
                    sum = (piles[i]/mid) + 1;
                }
                hour = hour + sum;
            }
            if(hour <= h){
                high = mid ;
            } else { 
                low = mid + 1 ;
            }
        }
        return low ;
        
    }
};