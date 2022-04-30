#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &s, int x)
{
    if(s.size()==0 || s.top()>=x)
    {
        s.push(x);
        return;
    }
    int temp = s.top();
    s.pop();
    insert(s, x);
    s.push(temp);
}
void Sort(stack<int> &s, int n)
{
    if(n==0)
        return;
    int temp = s.top();
    s.pop();
    Sort(s, n-1);
    insert(s, temp);
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(5);
    s.push(4);
    s.push(2);
    s.push(3);
    s.push(8);
    s.push(7);
    s.push(9);
    Sort(s, s.size()-1);

    while(s.size()!=0)
    {
        cout<<s.top()<<" ";
        s.pop();
    }


}