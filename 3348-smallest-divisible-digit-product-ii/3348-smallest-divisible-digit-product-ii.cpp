class Solution {
public:
    string smallestNumber(string num, long long t) {
     long long temp = t;
     for(int i = 2;i<=9;i++)
     {
        while(temp%i==0)temp/=i;
     } 
     if(temp>1)return "-1";
     int n = num.size();
     vector<long long>rem(n+1);
     rem[0] = t;
     int pos = n-1;
     for(int i=0;i<n;i++)
     {
        if(num[i]=='0')
        {
            pos = i;
            break;
        }
        rem[i+1] = rem[i]/gcd(rem[i],(long long)(num[i]-'0'));
     }  
     if(rem[n]==1)return num;
     for(int i=pos;i>=0;i--)
     {
        while(true)
        {
            num[i]++;
            if(num[i]>'9')break;
            long long tt = rem[i]/gcd(rem[i],(long long)(num[i]-'0'));
            int k = 9;
            for(int j=n-1;j>i;j--)
            {
                while(tt%k!=0)k--;
                tt/=k;
                num[j]=char('0'+k);
            }
            if(tt==1)return num;
        }
     }
     string ans;
     long long org = t;
     for(int i=9;i>=2;i--)
     {
        while(org%i==0)
        {
            ans.push_back(char('0'+i));
            org/=i;
        }
     }
     int padding = max(n+1 - (int)ans.size(),0);
     ans.append(padding,'1');
     reverse(ans.begin(),ans.end());
     return ans;
    }
};