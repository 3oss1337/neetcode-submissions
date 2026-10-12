class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int longest=0;
        for(int x : s)
        {
            if(s.count(x-1))continue;
            int y =x;
            while(s.count(y+1))y++;
            longest = max(longest, y-x+1);
        }
        return longest;
    }
};
