class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int , int> mp ;
    for(int i = 0 ; i < nums.size(); i++){
        mp[nums[i]]++;
    }
    
    vector<pair<int,int>> v(mp.begin(), mp.end());

    sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b) {
        return a.second > b.second;
    });

    vector<int> final;
    for(int i = 0 ; i < k ; i++) {
        final.push_back(v[i].first);
    }
    return final;
    }
};