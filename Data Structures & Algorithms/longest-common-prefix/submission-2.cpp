class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans = "";
        for(int i = 0; i < strs[0].length(); i++)
        {
            char temp = strs[0][i];
            for(int j = 0;j < strs.size(); j++)
            {
                if(strs[j].length() <= i || temp != strs[j][i])
                {
                    return ans;
                }
            }
            ans = ans + temp;
        }
        
        return ans;
    }
};