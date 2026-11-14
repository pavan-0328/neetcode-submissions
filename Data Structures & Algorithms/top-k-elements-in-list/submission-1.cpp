class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto i: nums){
            mp[i]+=1;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> max_heap;
        for(auto& i: mp){
            max_heap.push({i.second,i.first});
            if(max_heap.size()>k){
                max_heap.pop();
            }
        }

        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(max_heap.top().second);
            max_heap.pop();
        }
        return res;
    }
};
