#include<bits/stdc++.h>
using namespace std;
void Insert(stack<int> &s, int x)
{
    if(s.size()==0)
    {
        s.push(x);
        return;
    }
    int temp = s.top();
    s.pop();
    Insert(s, x);
    s.push(temp);
}
void Reverse(stack<int> &s)
{
    if(s.size()==1)
        return;
    
    int temp = s.top();
    s.pop();
    Reverse(s);
    Insert(s, temp);
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    Reverse(s);

    while(s.size()>0)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}