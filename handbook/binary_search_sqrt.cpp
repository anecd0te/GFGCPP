#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 30;
    int low = 0, high = x;
    float ans;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(mid*mid==x){
            ans = mid;
            break;
        }
        if(mid*mid<x){
            ans = mid;
            low = mid+1;
        }
            
        else high = mid-1;
    }
    float increment = 0.1;
    for(int i = 0;i<2;i++){
        while(ans*ans<=x){
            ans+=increment;
        }
        ans = ans-increment;
        increment/=10;

    }
    cout<<ans;
    return 0;

}