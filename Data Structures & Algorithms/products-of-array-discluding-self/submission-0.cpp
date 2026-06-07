class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> ans;
        int pre[nums.size()];
        int suf[nums.size()];
        pre[0] = nums[0];
        suf[nums.size()-1] = nums[nums.size()-1];
        for(int i = 1; i<nums.size(); i++)
        {
            pre[i] = pre[i-1] * nums[i];
            suf[nums.size()-1-i] = suf[nums.size()-i]* nums[nums.size()-1-i];
        }
        cout << " pre = ";
        for(int i = 0; i < nums.size(); i++)
        {
            cout<<pre[i]<<" ";
        }

        cout << "\n suf = ";
        for(int i = 0; i < nums.size(); i++)
        {
            cout<<suf[i]<<" ";
        }
        ans.push_back(suf[1]);
        for(int i = 1; i < nums.size()-1; i++)
        {
            ans.push_back(pre[i-1]*suf[i+1]);
        }
        ans.push_back(pre[nums.size()-2]);
        return ans;
    }
};
