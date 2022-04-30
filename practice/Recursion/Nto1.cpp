#include<bits/stdc++.h>
using namespace std;

void Print(int N)
{
    if(N==0)
        return;
    cout<<N<<"\n";
    Print(N-1);
}
int main()
{
    int N = 15;
    Print(N);

    return 0;
}