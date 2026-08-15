class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
     int x = 0;
     int n = nums.size(),zero=0;
     for(int i:nums)
     {
        x^=i;
        if(i==0)zero++;
     }   
     if(x!=0)return n;// xor is not zero that
     if(zero==n)return 0; // if all elements are zero
     return n-1; // else we can remove one non zero element from this
    }
};