class Solution {

// Time Complexcity : O(n)

public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int, int> m;
        vector<int> ans(k);
        for(int i = 0; i < nums.size(); ++i){
            m[nums[i]]++;
        }
        
        priority_queue<pair<int, int>> pq;
        
        for(auto it : m){
            pq.push({it.second, it.first});
        }
        
        while(k--){
            ans[k] = ((pq.top()).second);
            pq.pop();
        }
        
        return ans;        
    }
};
