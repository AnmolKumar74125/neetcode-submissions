class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>> hs;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            int j = i+1, k = n-1;
            while(j < k)
            {
                if(nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    hs.insert(temp);
                    j++;
                    k--;
                }
                else if(nums[i] + nums[j] + nums[k] > 0)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        return vector<vector<int>>(hs.begin(), hs.end());;
    }
};
