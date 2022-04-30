#include<bits/stdc++.h>
using namespace std;
void ispos(int i, int j, vector<vector<int>> &a, int n, vector<vector<int>> &vis, bool &ans){
    if(i==1 && j==n-1){
        ans = true;
        //cout<<"YES";
        return;
    }
         //ans = true;
    //downward
    if(i+1<2 && !vis[i+1][j] && a[i+1][j]==0){
        vis[i][j]=1;
        ispos(i+1, j, a, n, vis, ans);
        vis[i][j]=0;
    }
    //left
    if(j-1>=0 && !vis[i][j-1] && a[i][j-1]==0){
        vis[i][j]=1;
        ispos(i, j-1, a, n, vis, ans);
        vis[i][j]=0;
    }
    //right
    if(j+1<n && !vis[i][j+1] && a[i][j+1]==0){
        vis[i][j]=1;
        ispos(i, j+1, a,n, vis, ans);
        vis[i][j] = 0;
    }
    //up
    if(i-1>=0 && !vis[i-1][j] && a[i-1][j]==0){
        vis[i][j]=1;
        ispos(i-1, j, a, n, vis, ans);
        vis[i-1][j]=0;
    }
    //return false;
}
int main(){
    int t;
    cin>>t;
    //cout<<"enter"<<t;
    while(t--){
        //cout<<"enter"<<t<<endl;
        int n;
        cin>>n;
        //cout<<"value of  n"<<n;
        vector<vector<int>> arr(2, vector<int>(n,0));
        for(int i = 0;i<2;i++){
            for(int j = 0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        vector<vector<int>> vis(2, vector<int>(n,0));
        //cout<<vis[0][2];
        bool ans = false;
        if(arr[0][0]==0){
            //cout<<"func called";
            ispos(0,0, arr, n, vis, ans);
        }
        if(ans)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
    }
}