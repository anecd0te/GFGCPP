#include<bits/stdc++.h>
using namespace std;

int Sum(int n)
{
    if(n==1)
        return 1;
    return n + Sum(n-1);
}
int main()
{
    int n = 8;
    cout<<Sum(n);

    return 0;
}