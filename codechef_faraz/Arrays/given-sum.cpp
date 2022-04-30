#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6, sum = 10;
    vector<int> arr = {2, 4, 3, 1, 7, 11};
    for(int i = 0;i<n;i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                cout<<"Found sum at "<<i<<" and "<<j<<endl;
                break;
            }
        }
    }

    return 0;
}