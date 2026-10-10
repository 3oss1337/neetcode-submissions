class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string,vector<string>> smap; 
        for(const string& s: strs)
        {
            vector<int> count(26,0);
            for(char c : s)
            {
                count[c - 'a']++;
            }
            string key;
            for(int i =0; i < 26;i++)
            {
                key+=char(count[i]);
            }
            smap[key].push_back(s);
        }
        vector<vector<string>> results;
        for (auto& pair : smap){
            results.push_back(pair.second);

        }
        return results;
    }
};
