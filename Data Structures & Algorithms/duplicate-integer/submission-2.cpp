class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_set<int> hs;
        for(int i = 0; i < (int)nums.size(); i++)
        {
            if(hs.contains(nums[i]))
            {
                return true;
            }
            hs.insert(nums[i]);
        }
        return false;
    }
};