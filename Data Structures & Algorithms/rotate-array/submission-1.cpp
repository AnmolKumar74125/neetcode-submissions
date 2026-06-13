class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        k = k % n;
        vector<int> ans;
        int i = 0;
        while(i < n)
        {
            ans.push_back(nums[(i+(n-k))%n]);
            i++;
        }
        nums = ans;
    }
};