#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {0,0,1,1,1,1,2,2,2,2,2,2,2,2,3,3,3};
    int size = v.size();
    int count = 1;
    for(int i = 1;i<size;i++){
        if(v[i]==v[i-1])
            count++;
        else count = 1;
        if(count>=(size/2)){
            cout<<v[i];
            break;
        }
    }
    return 0;
}