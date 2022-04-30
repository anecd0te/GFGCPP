//https://www.youtube.com/watch?v=I-l6PBeERuc&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=16
//https://practice.geeksforgeeks.org/problems/number-of-coins1824/1#
/*
Example 1:

Input: V = 30, M = 3, coins[] = {25, 10, 5}
Output: 2
Explanation: Use one 25 cent coin
and one 5 cent coin
Example 2:
Input: V = 11, M = 4,coins[] = {9, 6, 5, 1} 
Output: 2 
Explanation: Use one 6 cent coin
and one 5 cent coin
*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	   int t[M+1][V+1];
	   for(int i = 0;i<M+1;i++){
	       for(int j = 0;j<V+1;j++){
	           if(i==0)
	            t[i][j] = INT_MAX-1;
	           if(j==0)
	            t[i][j] = 0;
	       }
	   }
	   for(int i = 1;i<M+1;i++){
	       for(int j =1;j<V+1;j++){
	           if(coins[i-1]<=j){
	               t[i][j] = min(t[i-1][j],1+t[i][j-coins[i-1]]);
	           }
	           else{
	               t[i][j] = t[i-1][j];
	           }
	       }
	   }
	   if(t[M][V]<=V)
	   return t[M][V];
	   else return -1;
	} 
	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends