class Solution {
public:
    int missingInteger(vector<int>& nums) {
     int s = nums[0],i=1,n = nums.size();
     while(i<n&&(nums[i]==(nums[i-1]+1)))s+=nums[i++];   
     sort(nums.begin(),nums.end());
     for(int i=0;i<n;i++)
     {
        if(nums[i]==s)s++;
     }
     return s;
    }
};