class Solution {
public:
    bool validPalindrome(string s) {
        
        int x = 0;
        int i = 0, j = s.length()-1;
        while(i < j)
        {
            cout <<"i = "<<i<< " s[i] = " << s[i] << "  s[j] = "<<s[j]<<endl;
            if(s[i] != s[j])
            {
                cout << " s[i+1] = " << s[i+1] << "  s[j-1] = "<<s[j-1]<<endl;
                if(isPalin(s, i+1,j) || isPalin(s, i, j-1))
                {
                    return true;
                }
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool isPalin(string s, int i, int j)
    {
        while(i < j)
        {
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