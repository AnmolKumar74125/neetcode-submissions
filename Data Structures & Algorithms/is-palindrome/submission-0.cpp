class Solution {
public:
    bool isPalindrome(string s) {
        
        int i = 0, j = s.length()-1;
        while(i<=j)
        {
            if(!isalnum(s[i]))
            {
                i++;
                continue;
            }
            if(!isalnum(s[j]))
            {
                j--;
                continue;
            }
            s[i]=tolower(static_cast<unsigned char>(s[i]));
            s[j]=tolower(static_cast<unsigned char>(s[j]));
            cout<<" s[i] = "<< s[i] <<"  s[j] = "<<s[j]<<endl; 
            if(s[i] != s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
