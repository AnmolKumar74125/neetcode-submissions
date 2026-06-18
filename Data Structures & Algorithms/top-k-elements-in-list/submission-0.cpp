class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int> hm;
        for(int i = 0; i < nums.size();i++)
        {
            if(!hm.count(nums[i]))
            {
                hm[nums[i]] = 0;
            }
            hm[nums[i]]++;
        }
        map<int, int>::iterator itr = hm.begin();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(; itr != hm.end(); itr++)
        {
            pq.push(make_pair(itr->second,itr->first));
            cout<<itr->second << " -> "<<itr->first<<endl;
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<int> ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
