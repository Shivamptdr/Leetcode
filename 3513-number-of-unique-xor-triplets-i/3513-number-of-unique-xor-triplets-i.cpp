class Solution {
public:
    int help(int n)
    {
        int ans = 0;
        while(n>1)
        {
            n>>=1;
            ans++;
        }
        return ans;
    }
    int uniqueXorTriplets(vector<int>& nums) {
     int n = nums.size();
        if(n<3)return n;
        int p = help(n) + 1;
        return 1<<p;
    }
};