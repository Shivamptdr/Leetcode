class Solution {
public:
    bool checkValidString(string s) {
     int opengiven = 0;
     int openstar = 0;
     for(char ch :s)
     {
        if(ch=='(')opengiven++,openstar++;
        if(ch==')')opengiven--,openstar--;
        if(ch=='*')opengiven--,openstar++;
        if(openstar<0)return false;
        if(opengiven<0)opengiven = 0;
     }   
     return opengiven==0;
    }
};