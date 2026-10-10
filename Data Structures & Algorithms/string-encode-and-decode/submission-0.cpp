class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;
       for(string s : strs)
       {
        int count = s.length();
        encoded_string+=to_string(count);
        encoded_string+="#";
        encoded_string+=s;
       }
       return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int n = s.length();
        int i =0;
        while(i < n)
        {
            int j =i;
            while(s[j]!='#'){
                j++;
            }
            int len = stoi(s.substr(i,j-i));
            string word = s.substr(j+1,len);
            result.push_back(word);
            i=j+1+len;
        }

        return result;
    }
};
