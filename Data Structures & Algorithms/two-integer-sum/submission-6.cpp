class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> hm;
        for(int i = 0; i < (int)nums.size(); i++)
        {
           
            if(hm.contains(target - nums[i]))
            {
                ans.push_back(hm[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }
            
            hm[nums[i]] = i;
        }
        return ans; 
    }
};
