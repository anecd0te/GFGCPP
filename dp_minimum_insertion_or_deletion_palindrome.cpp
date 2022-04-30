// { Driver Code Starts
/*https://practice.geeksforgeeks.org/problems/form-a-palindrome1455/1#
https://www.youtube.com/watch?v=AEcRW4ylm_c&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=32
Example 1:

Input: str = "abcd"
Output: 3
Explanation: Inserted character marked
with bold characters in dcbabcd
Example 2:

Input: str = "aa"
Output: 0
Explanation:"aa" is already a palindrome.
*/
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    int countMin(string str){
    //complete the function here
    string str1 = str;
    reverse(str1.begin(), str1.end());
    int m = str.length();
    int t[m+1][m+1];
    for(int i = 0;i<m+1;i++){
        for(int j = 0;j<m+1;j++){
            if(i==0||j==0){
                t[i][j]=0;
            }
        }
    }
    for(int i = 1;i<m+1;i++){
        for(int j = 1;j<m+1;j++){
            if(str[i-1] == str1[j-1]){
                t[i][j] = 1+t[i-1][j-1];
            }
            else t[i][j] = max(t[i-1][j], t[i][j-1]);
        }
    }
    //cout<<t[m][m]<<endl;
    return m-t[m][m];
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}

  // } Driver Code Ends