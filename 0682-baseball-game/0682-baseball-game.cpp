class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i = 0 ; i < operations.size() ; i++) {
            string s = operations[i];
            if(s == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a+b);
            } else if (s == "D"){
                st.push(2*st.top());
            } else if (s == "C"){
                st.pop();
            } else {
                st.push(stoi(s));
            }

        }
        int sum = 0;
        while (!st.empty()){
            sum = sum + st.top();
            st.pop();
        }
        return sum ;
    }
};