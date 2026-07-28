class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int>mp;
        for(char ch : s)mp[ch]++;
        int n = s.size();
        string ans(n,'a');
        int i = 0 ,j = n-1;
        for(auto it : mp)
            {
               char  ch = it.first;
               int m = it.second;
                if(m%2==1)ans[n/2] = ch,m--;
                while(m>0)
                    {
                        ans[i] = ch;
                        ans[j] = ch;
                        i++;j--;
                        m-=2;
                    }
            }
        return ans;
        
    }
};