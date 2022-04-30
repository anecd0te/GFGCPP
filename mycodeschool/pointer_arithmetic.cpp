#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3] = {1,2,3};
    int *p = arr;
    cout<<arr<<endl;
    cout<<p<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(p+2);
    // int a=1025;
    // int* p = &a;
    // cout<<p<<endl;
    // cout<<sizeof(int)<<endl;
    // cout<<*p<<endl;
    // cout<<p+1<<endl;
    // char* p0 = (char*)p;
    // cout<<p0<<endl;
    // cout<<*p0<<endl;
    // cout<<*p0+1<<endl;
    return 0;
}