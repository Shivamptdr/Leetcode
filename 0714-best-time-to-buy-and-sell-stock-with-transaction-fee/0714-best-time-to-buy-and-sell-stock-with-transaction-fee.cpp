class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
    int n = prices.size();
    int dp[n+1][2];
    memset(dp,0,sizeof(dp));
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<2;j++)
        {
            if(j==1)
            {
                dp[i][j] = max(dp[i+1][0]-prices[i],dp[i+1][1]);
            }
            else 
            {
                dp[i][j] = max(dp[i+1][1]+prices[i]-fee,dp[i+1][0]);
            }
        }
    } 
    return dp[0][1];
    }
};