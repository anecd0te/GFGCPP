// { Driver Code Starts
// Initial Template for C++
//https://practice.geeksforgeeks.org/problems/rod-cutting0840/1#
//https://www.youtube.com/watch?v=I4UR2T6Ro3w&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=14
/*input examples:
N = 8
Price[] = {1, 5, 8, 9, 10, 17, 17, 20}
Ans = 22
Input:
N=8
Price []={3,   5,   8,   9,  10,  17,  17,  20}
Output: 24
Explanation: 
The maximum obtainable value is 
24 by cutting the rod into 8 pieces 
of length 1, i.e, 8*3=24. 
*/
#include <bits/stdc++.h>
using namespace std;

int cutRod(int price[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        cout << cutRod(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


// User function Template for C++

int cutRod(int price[], int n) {
    int wt[n];
    for(int i = 0;i<n;i++){
        wt[i] = i+1;
    }
    int t[n+1][n+1];
    for(int i = 0;i<n+1;i++){
        for(int j = 0;j<n+1;j++){
            if(i==0)
                t[i][j] = 0;
            if(j==0){
                t[i][j] = 0;
            }
        }
    }
    for(int i = 1;i<n+1;i++){
        for(int j = 1;j<n+1;j++){
            if(wt[i-1]<=j){
                t[i][j] = max(t[i-1][j], price[i-1]+t[i][j-wt[i-1]]);
            }
            else t[i][j] = t[i-1][j];
        }
    }
    return t[n][n];
}
