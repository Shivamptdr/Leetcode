class Solution {
public:
    typedef unsigned long long ull;
    typedef long long ll;
    const ull thh = 1000001;
    const int mx = 55;
    ll fact(int n ,int r,ll K)
    {
        if(r>n)return 0;
        r = min(r,n-r);
        ull ans = 1;
        for(int i=1;i<=r;i++)
            {
                ans = ans*(n-i+1)/i;
                if(ans>=K)return K;
            }
        return ans;
    }
    ll count(vector<int>&f,int total,ll K)
    {
        ll ans = 1;
        for(int x : f)
            {
                ll i = fact(total,x,K);
                ans*=i;
                if(ans>=K)return K;
                total-=x;
            }
        return ans;
    }
    string smallestPalindrome(string s, int k) {
        ll K = k + 1ll;
       vector<int>f(26,0);
        for(char ch : s)f[ch-'a']++;
    string  mid = "";
       vector<int>hf(26,0);
    for(int i=0;i<26;i++)
    {
        if(f[i]&1)
        {
                mid = string(1,'a' + i);
        }
        hf[i] = f[i]/2;
    }
     int m = 0;
for(int i=0;i<26;i++)
    {
        m+=hf[i];
    }
ll tp = count(hf,m,K);
if(k>tp)
{
    return "";
}
string ans = "";
        for(int i = 0;i<m;i++)
            {
                for(int c = 0;c<26;c++)
                    {
                        if(hf[c]==0)continue;
                        hf[c]--;
                        ll cnt = count(hf,m-i-1,K);
                        if(k>cnt)
                        {
                            k-=cnt;
                            hf[c]++;
                        }
                        else 
                        {
                            ans.push_back('a'+ c);
                            break;
                        }
                    }
            }
        string r = ans;
        reverse(r.begin(),r.end());
        return ans + mid + r;
    }
};