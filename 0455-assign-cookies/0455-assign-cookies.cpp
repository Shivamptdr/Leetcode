class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
     int n  = g.size();
     int m = s.size();
     sort(g.begin(),g.end());
     sort(s.begin(),s.end());    
     int i=0,j=0;
     int ans = 0;
     while(j<m)
     {
        if(i<n&&s[j]>=g[i])ans++,i++;
        j++;
     }
     return ans;
    }
};