#include<bits/stdc++.h>
using namespace std;
int compare(int a, int b){
    if(a<b)
        return 1;
    else return -1;
}
void bubble(int *A, int n, int (*compare)(int, int)){
    int temp;
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(compare(A[j],A[j+1])>0){
                temp = A[j+1];
                A[j+1]=A[j];
                A[j] = temp;
            }
        }
    }
}
int main(){
    int A[] = {2,3,4,1,8,7,6,5};
    int n = sizeof(A)/sizeof(A[0]);
    bubble(A, n, compare);
    for(auto x: A){
        cout<<x<<" ";
    }
    return 0;
}