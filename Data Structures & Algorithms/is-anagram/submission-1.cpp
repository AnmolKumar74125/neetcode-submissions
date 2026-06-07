class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length())
        {
            return false;
        }
        unordered_map<char,int> hm;
        for(int i = 0; i < s.length(); i++)
        {
            if(hm.contains(s[i]))
            {
                hm[s[i]]++;
            }
            else
            {
                hm[s[i]] = 1;
            }
        }
        for(int i = 0; i < t.length(); i++)
        {
            if(hm.contains(t[i]))
            {
                hm[t[i]]--;
            }
            else
            {
                hm[t[i]] = -1;
            }
        }
        for(auto it = hm.begin(); it != hm.end(); it++)
        {
            //cout<<it->first<<" ->  "<<it->second<<endl;
            if(it->second != 0)
            {
                return false;
            }
        }
        return true;
    }
};
