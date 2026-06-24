class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int i = 0, n = s.length();
        int ans = 0;
        while(i < n)
        {
            vector<int> arr(256,0);
            arr[s[i]] = 1; 
            int j = i+1;
            int count = 1;
            ans = max(ans,count);
            while(j < n)
            {
                if(arr[s[j]] > 0)
                {
                    break;
                }
                else
                {
                    arr[s[j]]++;
                    count++;
                    ans = max(ans,count);
                    j++;
                    continue;
                }
            }
            i++;
        }
        return ans;
    }
};
