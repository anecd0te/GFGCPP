//https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1
//https://www.youtube.com/watch?v=szKVpQtBHh8&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=35
/*
Example 1:

Input: N = 5
arr = {40, 20, 30, 10, 30}
Output: 26000
Explaination: There are 4 matrices of dimension 
40x20, 20x30, 30x10, 10x30. Say the matrices are 
named as A, B, C, D. The efficient way is 
(A*(B*C))*D. The number of operations are 20*30*10 
+ 40*20*10 + 40*10*30 = 26000.

Example 2:

Input: N = 4
arr = {10, 30, 5, 60}
Output: 4500
Explaination: The matrices have dimensions 
10*30, 30*5, 5*60. Say the matrices are A, B 
and C. The most efficient way is (A*B)*C. The 
number of multiplications are 10*30*5 + 10*5*60 
= 4500.
*/
// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
int t[101][101];
class Solution{
public:
    int solve(int arr[], int i, int j){
        //cout<<t[100][1]<<"Test"<<endl;
        if(i>=j)
            return 0;
        if (t[i][j]!=-1){
            return t[i][j];
        }
        int mn = INT_MAX;
        for(int k = i;k<j;k++){
            int temp  = solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
            if(temp<mn){
                mn = temp;
            }
        }
        return t[i][j] = mn;
    }
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        int i = 1;
        int j = N-1;
        memset(t,-1,sizeof(t));
        return solve(arr,i,j);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends