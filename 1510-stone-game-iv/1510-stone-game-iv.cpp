class Solution {
public:
    bool winnerSquareGame(int n) {
    //dp[i] = true->current player can win eith i stones
    //dp[i] = false->current player loses with i stones
    //check all squares 1,4,9,....i;
    //if(dp[i-j*j]) == false , mark dp[i] = true and break;
      vector<bool>dp(n+1);
      for(int i=1;i<=n;i++)
      {
        for(int j=1;j*j<=i;j++)
        {
            if(!dp[i-j*j])
            {
                dp[i] = true;
                break;
            }
        }
      }  
      return dp[n];
    }
};