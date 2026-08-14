class Solution {
public:
int dp[5001][2];
int solve(vector<int>&prices,int buy,int i)
{
    if(i>=prices.size())return 0;
    if(dp[i][buy]!=-1)return dp[i][buy];
    if(buy)
    {
      return dp[i][buy]=max(-prices[i]+solve(prices,0,i+1),solve(prices,1,i+1));
    }
    else 
    {
      return dp[i][buy]=max(prices[i]+solve(prices,1,i+2),solve(prices,0,i+1));
    }
}
    int maxProfit(vector<int>& prices) {
     memset(dp,-1,sizeof(dp));
     return solve(prices,1,0);   
    }
};