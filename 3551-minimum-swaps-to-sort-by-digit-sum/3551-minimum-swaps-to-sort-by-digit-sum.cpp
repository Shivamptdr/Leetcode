class Solution {
public:
    int dsum(int n)
    {
        int sum = 0;
        while(n)
            {
                sum+=n%10;
                n/=10;
            }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
      int n = nums.size();
        vector<pair<int,int>>v;
        unordered_map<int,int>mp;
        for(int i = 0;i<n;i++)
            {
                v.push_back({dsum(nums[i]),nums[i]});
                mp[nums[i]] = i;
            }
        sort(v.begin(),v.end());
        vector<bool>vis(n,false);
        int answer = 0;
        for(int i = 0;i<n;i++)
            {
                int cv = v[i].second;
                if(vis[i]||nums[i]==cv)
                {
                    continue;
                }
                int cyc = 0;
                int j = i;
                while(!vis[j])
                    { 
                        vis[j]=true;
                        int k = v[j].second;
                        j = mp[k];
                        cyc++;
            }
                if(cyc>1)
                {
                    answer+=(cyc-1);
                }
            }
        return answer;
      
       
        
    }
};