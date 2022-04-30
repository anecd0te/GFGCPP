#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i = n-1; i>=0; i--){
            if(arr[i] <= 7){
                cout<<i+1<<endl;
                break;
                }
        }
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// bool hasall(vector<int> v){
//     int count = 0;
//     for(int i = 1;i<8;i++){
//         if(v[i]!=0){
//             count++;
//         }
//         if(count==7)
//             return true;
//     }
//     return false;
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,x, count=0;
//         cin>>n;
//         //int arr[n+1] = {0};
//         int flag = 0;
//         vector<int> v(n+1,0);
//         for(int i = 0;i<n;i++){
//             cin>>x;
//             v[x]++;
//             if(hasall(v)){
//                 cout<<i+1<<endl;
//                 //return 0;
//             }
//         }
//     }
//     return 0;
// }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;
// //     cin>>t;
// //     while(t--){
// //         int n,x, count;
// //         cin>>n;
// //         int arr[n+1] = {0};
// //         int flag = 0;
// //         // unordered_map<int, int> mp;
// //         for(int i = 1;i<=n;i++){
// //             if(flag == 1)
// //                 break;
// //             cin>>x;
// //             arr[x]=1;
// //             count = 0;
// //             for(int j = 1;j<=7;j++){
// //                 if(arr[j]==1)
// //                     count++;
// //                 if(count==7){
// //                     cout<<i<<endl;
// //                     flag = 1;
// //                 }
// //             }
// //         }
// //     }
// //     return 0;
// // }