class Solution {
public:
    string removeOuterParentheses(string s) {
     int idx = 0;
     int oct = 0;
     int cct = 0;
     for(int i=0;i<s.size();i++)
     {
        if(oct==0)idx = i;
        if(s[i]=='(')oct++;
        else cct++;
        if(oct==cct)
        {
            s[i] = '*';
            s[idx] = '*';
            oct = cct = 0;
        }
     }   
     string ans = "";
     for(char ch :s)
     {
        if(ch!='*')ans+=ch;
     }
     return ans;
    }
};