class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m1;
        std::priority_queue<std::pair<int, int>>pq;
        vector<int>  v;
        for(int i=0;i<nums.size();i++){
            m1[nums[i]]++;
        }
        for(auto& p:m1){
            pq.push({p.second,p.first});
        }
        for(int i=0;i<k;i++){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};
