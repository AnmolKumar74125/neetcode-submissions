class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0)
        {
            return 0;
        }
        unordered_set<int> hs;
        int ans = 1;
        int count = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            hs.insert(nums[i]);
        }
        
        for(unordered_set<int>::iterator itr = hs.begin(); itr != hs.end(); itr++)
        {
            int x = *itr;
            if(hs.count(x+1))
            {
                continue;
            }
            else
            {
                
                while(hs.count(x-1))
                {
                    count++;
                    x--;
                }
                ans = max(count, ans);
                count = 1;
            }
            
        }
        return ans;
    }
};
