class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>>pq;
        unordered_map<int, int>mp;
        for(auto num: nums){
            mp[num]++;
        }
        for(auto pair: mp){
            pq.push({pair.second, pair.first});
        }
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
