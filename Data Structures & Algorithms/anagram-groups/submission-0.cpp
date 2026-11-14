class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<int>> mp;
        for(int i=0;i<strs.size();i++){
            string x = strs[i];
            sort(x.begin(),x.end());
            if(mp.count(x) == 0) mp[x] = {i};
            else mp[x].push_back(i);
        }
        vector<vector<string>> re;
        for(auto i: mp){
            vector<string> temp;
            for(auto j: i.second){
                temp.push_back(strs[j]);
            }
            re.emplace_back(temp);
        }
        return re;
    }
};
