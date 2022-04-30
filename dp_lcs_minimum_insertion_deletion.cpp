//https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions0209/1
/*
Example 1:

Input: str1 = "heap", str2 = "pea"
Output: 3
Explanation: 2 deletions and 1 insertion
p and h deleted from heap. Then, p is 
inserted at the beginning One thing to 
note, though p was required yet it was 
removed/deleted first from its position 
and then it is inserted to some other 
position. Thus, p contributes one to the 
deletion_count and one to the 
insertion_count.
Example 2:

Input : str1 = "geeksforgeeks"
str2 = "geeks"
Output: 8
Explanation: 8 insertions
*/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    int x = str1.length();
	    int y = str2.length();
	    int t[x+1][y+1];
	    for(int i = 0;i<x+1;i++){
	        for(int j = 0;j<y+1;j++){
	            if(i==0||j==0)
	                t[i][j] = 0;
	        }
	    }
	    for(int i = 1;i<x+1;i++){
	        for(int j =1;j<y+1;j++){
	            if(str1[i-1]==str2[j-1]){
	                t[i][j] = 1+t[i-1][j-1];
	            }
	            else{
	                t[i][j] = max(t[i-1][j],t[i][j-1]);
	            }
	        }
	    }
	    int lcs = t[x][y];
	    int deletion = x-lcs;
	    int insertion = y-lcs;
	    return insertion+deletion;
	} 
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends