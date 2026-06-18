class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        map<map<char,int>, int> posMap;
        for(int i = 0; i < strs.size(); i++)
        {
            map<char, int> hm;
            createMap(strs[i], hm);
            printMap(hm);
            if(posMap.contains(hm))
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
    void createMap(string s, map<char,int>& hm)
    {
        for(int i =0; i < s.length(); i++)
        {
            if(hm.count(s[i]) > 0)
            {
                hm[s[i]]++;
            }
            else
            {
                hm[s[i]] = 1;
            }
        }
    }

    void printMap(map<char, int> hm)
    {
        for (const auto& [key, value] : hm)
        {
            cout << key << " -> " << value << "    ";
        }
        cout<< endl;
    }

};
