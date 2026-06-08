class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0)
        {
            return 0;
        }
        sort(nums.begin(), nums.end());
        int ans = 1;
        int count = 1;
        for(int i = 1; i < (int)nums.size(); i++)
        {
            if(nums[i]-1 == nums[i-1])
            {
                count++;
            }
            else if(nums[i]==nums[i-1])
            {
                continue;
            }
            else
            {
                count = 1; 
            }
            ans = max(ans, count);
        }
        return ans;
    }
};
