class Solution {
public:
    vector<int> len;
    string encode(vector<string>& strs) {
        string s = "";
        for(int i = 0; i < strs.size(); i++)
        {
            len.push_back(strs[i].length());
            s = s + strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {

        vector<string> ans;
        int x = 0;
        for(int i = 0; i < len.size(); i++)
        {
            cout<< len[i] <<". "<<x<<endl;
            ans.push_back(s.substr(x,len[i]));
            x = x + len[i];
        }
        return ans;
    }
};
