// { Driver Code Starts
//Initial template for C++
//https://www.youtube.com/watch?v=oCcUNRMl7dA&list=PL_z_8CaSLPWeT1ffjiImo0sYTcnLzo-wY&index=8
//https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1#
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution {
public:
    void solve(stack<int>&s, int middle){
        if(middle == 1){
            s.pop();
            return;
        }
        int temp = s.top();
        s.pop();
        solve(s,middle-1);
        s.push(temp);
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here 
        if(s.empty())
        return;
        int middle = (sizeOfStack/2.0)+1;
        solve(s, middle);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
  // } Driver Code Ends