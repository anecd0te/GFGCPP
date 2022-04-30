// { Driver Code Starts
/*
https://www.youtube.com/watch?v=QVntmksK2es&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=32
https://practice.geeksforgeeks.org/problems/check-for-subsequence4930/1#
Example 1:

Input:
A = AXY 
B = YADXCP
Output: 0 
Explanation: A is not a subsequence of B
as 'Y' appears before 'A'.
 

Example 2:

Input:
A = gksrek
B = geeksforgeeks
Output: 1
Explanation: A is a subsequence of B.
*/
#include <bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends


class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
        // code here
        int m = A.length();
        int n = B.length();
        int j = 0;
        for(int i = 0;i<n&&j<m;i++){
            if(A[j]==B[i]){
                j++;
            }
        }
        //cout<<j<<endl;
        if(j==m)
        return true;
        else return false;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;  
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0; 
} 
  // } Driver Code Ends