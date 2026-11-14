class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto i: nums){
            mp[i]+=1;
        }
        vector<pair<int,int>> p(mp.begin(),mp.end());
        sort(p.begin(),p.end(),[&](const pair<int,int>& a, const pair<int,int>& b){
            return a.second > b.second;
        });
        vector<int> re;
        for(int i=0;i<k;i++){
            re.push_back(p[i].first);
        }
        return re;
    }
};
