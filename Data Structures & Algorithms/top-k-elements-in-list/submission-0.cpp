class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int i:nums){
            freq[i]++;
        }

        priority_queue<pair<int,int>> heap;

        for(auto &p : freq){
            heap.push({p.second, p.first});
        }

        vector<int> ans;

        while(k--) {
            ans.push_back(heap.top().second);
            heap.pop();
        }

        return ans;

    }
};
