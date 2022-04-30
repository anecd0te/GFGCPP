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
    int t[201][201][2];
    //unordered_map<string, int> mp;
    long long int total(string S,long long int i,long long int j, int istrue){
        if(i>j){
            //return false;
            return t[i][j][istrue] = 0;
        }
        if(i==j){
            if(istrue == 1){
                return t[i][j][istrue]=(S[i]=='T')?1:0;
            }
            else return t[i][j][istrue] = (S[i]=='F')?1:0;
        }
        int ans = 0;
        /*
        string temp =  to_string(i);
        temp.push_back(' ');
        temp.append(to_string(j));
        temp.push_back(' ');
        temp.append(to_string(istrue));
        if(mp.find(temp)!=mp.end()){
            return mp[temp];
        }*/
        if(t[i][j][istrue]!=-1){
            return t[i][j][istrue];
        }
        for(int k = i+1;k<=j-1;k+=2){
            int lt, lf, rt, rf;
            if(t[i][k-1][1]==-1){
            lt = total(S,i,k-1,1);
            }
            else lt = t[i][k-1][1];
            if(t[i][k-1][0]==-1){
            lf = total(S,i,k-1, 0);
            }
            else lf = t[i][k-1][0];
            if(t[k+1][j][1]==-1){
            rt = total(S, k+1,j,1);
            }
            else rt = t[k+1][j][1];
            if(t[k+1][j][0]==-1){
            rf = total(S,k+1, j, 0);
            }
            else rf = t[k+1][j][0];
            //cout<<"lt "<<lt<<" lf"<<lf<<" rt"<<rt<<" rf"<<rf<<" ";
            if (S[k]=='&'){
                if(istrue==1){
                    ans+= lt*rt;
                }
                else ans+= lt*rf + lf*rt + lf*rf;
            }
            if (S[k]=='|'){
                if(istrue==1){
                    ans+= lt*rt + lf*rt + lt*rf;
                }
                else ans+= lf*rf;
            }
            if (S[k]=='^'){
                if(istrue==1){
                    ans+= lt*rf + lf*rt;
                }
                else ans+= lf*rf + lt*rt;
            }
            t[i][j][istrue] = ans%1003;
        }
        return ans%1003;
    }
    int countWays(int N, string S){
        // code here
        int ans;
        memset(t,-1,sizeof(t));
        ans = total(S, 0,N-1,1);
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