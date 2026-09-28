class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char ,int> mpp;
        for (int i = 0 ; i < s.size() ; i++) {
            mpp[s[i]]++;
        }

        vector<pair<char , int>> v(mpp.begin() , mpp.end());
        sort(v.begin() , v.end() ,[](pair<char , int> a ,pair<char , int> b ){
            return a.second > b.second;
        });
        
        string result = "";
        for (int i = 0 ; i < v.size() ; i++) {
            result += string(v[i].second, v[i].first);
        }
        return result;
    }
};