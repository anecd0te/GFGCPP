//https://www.youtube.com/watch?v=hbTaCmQGqLg&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=31
//https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1#
/*
Exampel 1:

Input: str = "axxxy"
Output: 2
Explanation: The longest repeating subsequenece
is "xx".
Example 2:

Input: str = "aab"
output: 1
Explanation: The longest reapting subsequenece
is "a".
*/
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    string str1 = str;
		    int len = str.length();
		    int t[len+1][len+1];
		    for(int i = 0;i<len+1;i++){
		        for(int j =0;j<len+1;j++){
		            if(i==0||j==0){
		                t[i][j]=0;
		            }
		        }
		    }
		    for(int i = 1;i<len+1;i++){
		        for(int j = 1;j<len+1;j++){
		            if(str[i-1]==str1[j-1] && i!=j){
		                t[i][j] = 1+t[i-1][j-1];
		            }
		            else{
		                t[i][j] = max(t[i-1][j],t[i][j-1]);
		            }
		        }
		    }
		    return t[len][len];
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends