#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> mat1 = {{1,2,3},
                               {4,5,6},
                               {7,8,9}};
    vector<vector<int>> mat2 = {{9,8,7},
                                {6,5,4},
                                {3,2,1}};
    vector<vector<int>> ans(mat1.size(), vector<int> (mat2.size()));
    for(int i = 0;i<mat1.size();i++){
        for(int j = 0;j<mat2.size();j++){
            ans[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    for(int i = 0;i<mat1.size();i++){
        for(int j = 0;j<mat2.size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}