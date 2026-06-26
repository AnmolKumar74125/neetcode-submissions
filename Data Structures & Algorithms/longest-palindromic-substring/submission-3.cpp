class Solution {
public:
    string longestPalindrome(string s) {
        
        string ans = "";
        for(int i = 0; i < s.length(); i++)
        {
            for(int j = s.length()-1; j >=i; j--)
            {
                if(s[i] == s[j])
                {
                    string temp = isPalin(s,i,j);
                    //cout<<temp<<endl;
                    
                    if(temp.length() > ans.length())
                    {
                        ans = temp;
                    }
                    //cout<<ans<<endl;
                }
            }
        }
        return ans;
    }
    string isPalin(string s, int i, int j)
    {
        string temp = s.substr(i, j - i + 1);
        //cout<<temp<<endl;
        while(i <= j)
        {
            if(s[i] != s[j])
            {
                return "";
            }
            i++;
            j--;
        }
        return temp;
    }
};
