class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        int total = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            total += nums[i];
        }
        if(total%2 != 0)
        {
            return false;
        }
        int target = total / 2;
        return targetSum(nums, target);
    }

    bool targetSum(vector<int>& nums, int target)
    {
       // int arr[nums.size()+1][target+1];
        vector<vector<int>> arr(nums.size() + 1,
                        vector<int>(target + 1, 0));
       for(int i = 0; i <= nums.size(); i++) arr[i][0] = 1;
        
        for(int i = 1; i <= nums.size(); i++)
        {
            for(int j = 1; j <= target; j++)
            {
                if(nums[i-1] > j)
                {
                    //arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
                    arr[i][j] = arr[i-1][j];
                    cout << arr[i][j] << " ";
                    continue;
                }
                //cout<< nums[i-1]-j<<endl;
                else
                {
                    arr[i][j] = max(arr[i-1][j], arr[i-1][j - nums[i-1]]);
                }
                    cout << arr[i][j] << " ";
            }
            cout<<endl;
        }
        //return true;
        return arr[nums.size()][target] == 1;
    }
};

/*
    1 2 3 4 5
1   t 
2
3
4

*/