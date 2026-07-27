class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int mx1 = 0;
     int mx2 = 0;
     for(int cur :nums)
     {
        if(cur>mx1)mx2 = mx1,mx1 = cur;
        else if(cur>mx2)mx2 = cur;
     }   
     return (mx1-1)*(mx2-1);
    }
};