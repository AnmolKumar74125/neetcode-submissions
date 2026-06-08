class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        unordered_map<int,int> hm;
        int ans = 0;
        for(int i= 0; i < (int)nums.size(); i++)
        {
            if(hm.count(nums[i]-1) > 0)
            {
                hm[nums[i]] = hm[nums[i]-1]+1;
            }
            else
            {
                hm[nums[i]] = 1;
            }
            ans = max(ans, hm[nums[i]]);
            //cout<<nums[i]<<" -> "<<hm[nums[i]]<<endl;
        }
        return ans;
    }
};
