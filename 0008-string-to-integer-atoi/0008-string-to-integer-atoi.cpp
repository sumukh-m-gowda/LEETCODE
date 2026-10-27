
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.size();
        long long num = 0;
        int sign = 1;

        while (i < n && s[i] == ' ') {
            i++;
        }

        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') {
                sign = -1;
            }
            i++;
        }

        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';

            if (num > (INT_MAX - digit) / 10LL) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            num = num * 10 + digit;
            i++;
        }

        return (int)(num * sign);
    }
};
