class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freqmap;
        for(int i : nums)
        {
            freqmap[i]++;
        }
        vector<pair<int,int>> v;
        for(auto& [element,count]:freqmap)
        {
            v.push_back({element,count});
        }
        sort(v.begin(), v.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
            return a.second > b.second;
        });
        vector<int> result;
        for(int i =0; i < k;i++)
        {
            result.push_back(v[i].first);

        }
        return result;
    }
};
