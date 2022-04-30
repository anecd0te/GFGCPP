#include<bits/stdc++.h>
using namespace std;
float bins(int n, int p){
    int low = 0;
    int high = n;
    float root = 0.0;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(mid*mid == n){
            //root = mid;
            return mid;
        }
        if(mid*mid>n)
            high = mid-1;
        else{ low = mid+1;
                root = mid;
        }
    }
    float prec = 0.1;
    cout<<root<<endl;
    for(int i=0;i<p;i++){
        while(root*root<=n){
            cout<<root<<endl;
            root+=prec;
        }
        root -= prec;
        prec /=10;

    }
    return root;
}
int main(){
    int n = 40 ;
    int p = 2;
    float root = bins(n, p);
    cout<<root;
    return 0;
}