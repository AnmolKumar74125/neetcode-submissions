class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        unordered_set<int> hs(nums.begin(), nums.end());
        vector<int> ans;
        for(int i =1 ; i <= nums.size(); i++)
        {
            if(!hs.contains(i))
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};