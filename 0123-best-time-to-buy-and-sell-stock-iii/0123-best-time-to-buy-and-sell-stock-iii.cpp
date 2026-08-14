class Solution {
public:
int dp[100001][2][3];
int solve(vector<int>&prices,int buy,int txn,int i)
{
   if(i==prices.size())return 0;
   if(txn==0)return 0;
   if(dp[i][buy][txn]!=-1)return dp[i][buy][txn];
   if(buy)
   {
      return dp[i][buy][txn] = max(-prices[i] + solve(prices,0,txn,i+1),
      solve(prices,1,txn,i+1));
   }
   else
   {
    return dp[i][buy][txn] = max(prices[i]+solve(prices,1,txn-1,i+1),
    solve(prices,0,txn,i+1));
   }
}
    int maxProfit(vector<int>& prices) {
    memset(dp,-1,sizeof(dp));
    return solve(prices,1,2,0);   
    }
};