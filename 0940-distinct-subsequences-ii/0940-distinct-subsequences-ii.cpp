class Solution {
public:
int MOD = 1e9+7;
    int distinctSubseqII(string s) {
        vector<long long>mp(26, 0);
        long long total=1; 
        for (char c : s) {
            long long ntotal=(2*total-mp[c-'a']+MOD)%MOD;
            mp[c-'a']=total;
            total=ntotal;
        }
        return (total-1+MOD)%MOD; 
    }
};