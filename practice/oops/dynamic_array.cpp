#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"enter the size"<<endl;
    cin>>number;
    // int arr[number];
    // for(int i = 0;i<number;i++){
    //     cin>>arr[i];
    // }
    // for(int i = 0;i<number;i++){
    //     cout<<arr[i]<<" ";
    // }
    int *arr = new int(number);
    int counter = 0;
    int temp;
    for(int i = 0;i<number;i++){
        counter++;
        cin>>temp;
        *(arr+counter) = temp;
    }
    counter = 0;
    for(int i = 0;i<number;i++){
        counter++;
        cout<<*(arr+counter);
    }
    delete arr;
    return 0;
}