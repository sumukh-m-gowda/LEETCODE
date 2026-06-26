class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        int i = 0;
        while(s.size() > i){
            if(s[i] != '*') {
                st.push(s[i]);
            } else {
                st.pop();
            }
            i++; 
        }
        string result = "";
        while(!st.empty()) {
            result += st.top();
            st.pop();
        }
        reverse (result.begin() , result.end());

        return result; 
    }
};