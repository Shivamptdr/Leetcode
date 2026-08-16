class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
     int ct1 = 0;
     int ct2 = 0;
     int ct3=0;
     for(int i=0;i<stones.size();i++)
     {
        if(stones[i]%3==0)ct1++;
        else if(stones[i]%3==1)ct2++;
        else ct3++;
     } 
     if(ct1%2==0)return ct2>=1&&ct3>=1;
     return abs(ct2-ct3)>2;  
    }
    
};