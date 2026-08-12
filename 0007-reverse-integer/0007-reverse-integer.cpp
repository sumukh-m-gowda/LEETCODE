class Solution {
public:
    int reverse(int x) {
        long long final = 0;

        while (x != 0) {
            int rem = x % 10;
            x = x / 10;

            final = final * 10 + rem;
        }

        if (final > INT_MAX || final < INT_MIN) {
            return 0;
        }

        return final;
    }
};