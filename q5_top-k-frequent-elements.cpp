//Top K-frequent Elements
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> ans;
       priority_queue<pair<int, int>> maxheap;

        vector<int> ans1;
        for(int num: nums){
            ans[num]++;
        }

        for(const auto& it: ans){
            maxheap.push({it.second, it.first});
        }
        
        int i = 0;
        while(!maxheap.empty() && i < k){
            ans1.push_back(maxheap.top().second);
            maxheap.pop();
            i++;
        }
        return ans1;
    }
};
