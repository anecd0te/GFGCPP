#include<bits/stdc++.h>
using namespace std;

void Print(int n)
{
    if(n==0)
        return;
    Print(n-1);
    cout<<n<<endl;
}
int main()
{
    int n = 14;
    Print(n);

    return 0;
}