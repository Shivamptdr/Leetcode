class Solution {
public:
    int minimumPushes(string word) {
     int ans = 0;
     vector<int>mp(26,0);
     for(char ch : word)mp[ch-'a']++;
     sort(mp.rbegin(),mp.rend());
     int sum = 0;
     int k = 1;
     for(int i=0;i<26;i++)
     {
        sum+=mp[i];
        if(i==7||i==15||i==23)
        {
            ans+=(sum*k);
            k++;
            sum=0;
        }
     }
     if(sum)ans+=(sum*k);
     return ans;
    }
};