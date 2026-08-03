class Solution {
public:
    string stoneGameIII(vector<int>& stone) {
      int n = stone.size();  
      int dp1 = 0,dp2=0,dp3=0;
      for(int i=n-1;i>=0;i--)
      {
        int best = INT_MIN;
        int sum = 0;
        for(int k=0;k<3&&i+k<n;k++)
        {
            sum+=stone[i+k];
            int nxt;
            if(k==0)nxt = dp1;
            else if(k==1)nxt = dp2;
            else nxt = dp3;
            best = max(best,sum-nxt);

        }
        dp3 = dp2;
        dp2 = dp1;
        dp1 = best;
      }
      if(dp1>0)return "Alice";
      if(dp1<0)return "Bob";
      return "Tie";
    }
};