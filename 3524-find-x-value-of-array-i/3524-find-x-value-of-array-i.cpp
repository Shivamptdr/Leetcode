class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
     int n = nums.size();
     vector<long long>ans(k,0),p(k,0),curr(k,0); 
        for(int i = 0;i<n;i++)
            {
              int rem = nums[i]%k;
                if(rem<0)rem+=k;
                for(int j = 0;j<k;j++)curr[j]=0;
                curr[rem] = 1;
                for(int j = 0;j<k;j++)
                    {
                        if(p[j]!=0)
                        {
                            int r = (j*rem)%k;
                            curr[r]+=p[j];
                        }
                    }
                for(int j = 0;j<k;j++)
                    {
                        ans[j]+=curr[j];
                    }
                p.swap(curr);
            }
        return ans;
    }
};