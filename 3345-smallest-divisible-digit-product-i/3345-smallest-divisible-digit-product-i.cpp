class Solution {
public:
int prod_digit(int n)
{
    int p = 1;
    while(n)
    {
        p*=(n%10);
        n/=10;
    }
    return p;
}
    int smallestNumber(int n, int t) {
    while(true)
    {
        if(prod_digit(n)%t==0)return n;
        n++;
    }
    return n;
    }
};