//https://www.youtube.com/watch?v=pGVguAcWX4g&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=38
//https://practice.geeksforgeeks.org/problems/boolean-parenthesization5610/1#
/*
Example 1:

Input: N = 7
S = T|T&F^T
Output: 4
Explaination: The expression evaluates 
to true in 4 ways ((T|T)&(F^T)), 
(T|(T&(F^T))), (((T|T)&F)^T) and (T|((T&F)^T)).
Example 2:

Input: N = 5
S = T^F|F
Output: 2
Explaination: ((T^F)|F) and (T^(F|F)) are the 
only ways.
*/
// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int total(string S, int i, int j, bool istrue){
        if(i>j){
            return 0;
        }
        if(i==j){
            if(istrue == true){
                return S[i]=='T'?1:0;
            }
            else return S[i]=='F'?1:0;
        }
        int ans = 0;
        for(int k = i+1;k<=j-1;k+=2){
            int lt = total(S,i,k-1,true);
            int lf = total(S,i,k-1, false);
            int rt = total(S, k+1,j,true);
            int rf = total(S,k+1, j, false);
            //cout<<"lt "<<lt<<" lf"<<lf<<" rt"<<rt<<" rf"<<rf<<" ";
            if (S[k]=='&'){
                if(istrue==true){
                    ans+= lt*rt;
                }
                else ans+= lt*rf + lf*rt + lf*rf;
            }
            if (S[k]=='|'){
                if(istrue==true){
                    ans+= lt*rt + lf*rt + lt*rf;
                }
                else ans+= lf*rf;
            }
            if (S[k]=='^'){
                if(istrue==true){
                    ans+= lt*rf + lf*rt;
                }
                else ans+= lf*rf + lt*rt;
            }
        }
        return ans;
        
    }
    int countWays(int N, string S){
        // code here
        int ans;
        ans = total(S, 0,N-1,true);
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}  // } Driver Code Ends