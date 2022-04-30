#include<bits/stdc++.h>
using namespace std;

int Sum(int n)
{
    if(n<10)
        return n;
    return n%10 + Sum(n/10);
}
int main()
{
    int n = 12345;
    cout<<Sum(n);
    return 0;
}