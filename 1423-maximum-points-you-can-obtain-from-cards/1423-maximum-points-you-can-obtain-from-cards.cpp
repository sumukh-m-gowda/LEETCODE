class Solution {
public:
    int maxScore(vector<int>& card, int k) {

        int n = card.size();

        if (n == k) {
            int sum = 0;

            for (int i = 0; i < n; i++) {
                sum += card[i];
            }

            return sum;
        }

        int lsum = 0;

        for (int i = 0; i < k; i++) {
            lsum += card[i];
        }

        int maxi = lsum;

        int r = n - 1;

        for (int l = k - 1; l >= 0; l--) {

            lsum = lsum - card[l];
            lsum = lsum + card[r];

            r--;

            maxi = max(maxi, lsum);
        }

        return maxi;
    }
};