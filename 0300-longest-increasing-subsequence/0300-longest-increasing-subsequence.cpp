class Solution {
public:
int dp[2501][2501];
int solve(vector<int>&nums,int i,int curr)
{
    if(i==nums.size())return 0;
    if(dp[i][curr+1]!=-1)return dp[i][curr+1];
    int take = 0;
    if(curr==-1||nums[curr]<nums[i]) 
    take = solve(nums,i+1,i)+1;
    int nottake = solve(nums,i+1,curr);
    return dp[i][curr+1] = max(take,nottake);
}
    int lengthOfLIS(vector<int>& nums) {
    memset(dp,-1,sizeof(dp));
     return solve(nums,0,-1);   
    }
};