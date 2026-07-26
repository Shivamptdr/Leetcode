class Solution {
public:
    int largestInteger(int n, int s) {
     if(s>n*9)return -1;
     int ans = 0;
     while(s&&n)
     {
        if(s<9)ans=ans*10 + s,s=0;
        else ans = ans*10 + 9,s-=9;
        n--;
     }   
     if(n)ans = ans*pow(10,n);
     return ans;
    }
};