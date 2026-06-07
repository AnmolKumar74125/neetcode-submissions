class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> hm;
        for(int i = 0; i < (int)nums.size(); i++)
        {
            /*
            if(!hm.contains(nums[i]))
            {
                hm[nums[i]] = i;
            }
            else if(nums[i]*2 == target)
            {
                ans.push_back(hm[nums[i]]);
                ans.push_back(i);
                return ans;
            }
            */
            if(hm.contains(target - nums[i]) /*&& hm[nums[i]] != hm[target - nums[i]]*/)
            {
                ans.push_back(hm[target - nums[i]]);
                ans.push_back(i);
                cout << nums[i] << " -> " << hm[nums[i]] <<endl;
                return ans;
            }
            if(!hm.contains(nums[i]))
            {
                hm[nums[i]] = i;
            }

            cout << nums[i] << " -> " << hm[nums[i]] <<endl;
        }
        return ans; 
    }
};
