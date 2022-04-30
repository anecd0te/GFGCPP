#include<bits/stdc++.h>
using namespace std;

void basicswapping(string input, int start, int end, string given, set<string> &ans)
{
    if(start == end-1)
    {
        ans.insert(input);
    }

    for(int i = start; i<end; i++)
    {
        swap(input[i], input[start]);
        basicswapping(input, start+1, end, given, ans);
        swap(input[i], input[start]);
    }
}

void inbuilt(vector<int> arr)
{
    do{
        cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<"\n";
    }while(next_permutation(arr.begin(), arr.end()));
}
void better(vector<int> &arr)
{
    int n = arr.size(), i, j;
    for(i = n-2; i>=0; i++)
    {
        if(arr[i]<arr[i+1])
        break;
    }
    if(i<0)
        reverse(arr.begin(), arr.end());
    for(j = n-1;j>i; j++)
    {
        if(arr[j]>arr[i])
            break;
    }
    swap(arr[i], arr[j]);
    reverse(arr.begin()+i+1, arr.end());
}
int main()
{
    vector<int> arr{1,2,3,4,5};
    inbuilt(arr);
    // better(arr);
    for(auto x: arr)
    {
        cout<<x<<" ";
    }
          return 0;
}