class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        sort(strs.begin(),strs.end());
        map<array<int,26>, int> posMap;
        for(int i = 0; i < strs.size(); i++)
        {
            array<int,26> hm{};
            createMap(strs[i], hm);
            if(posMap.count(hm))
            {
                ans[posMap[hm]].push_back(strs[i]);
            }
            else
            {
                posMap[hm]= ans.size();
                vector<string> temp;
                temp.push_back(strs[i]);
                ans.push_back(temp);
            }
        }
        return ans;
    }
    void createMap(string s, array<int,26>& hm)
    {
        for(int i =0; i < s.length(); i++)
        {
           hm[s[i]-97]++;
        }
    }
};
