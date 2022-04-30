#include<bits/stdc++.h>
using namespace std;

void better_tar(vector<int> arr, int target)
{
    sort(arr.begin(), arr.end());
    for(auto x: arr)
        cout<<x<<" ";
    cout<<endl;
    bool flag = true;
    for(int i = 0; i<arr.size(); i++)
    {
        int sum = target - arr[i], start = arr[i], end = arr.size()-1;
        while(start < end)
        {
            if(arr[start] + arr[end] == sum)
            {
                cout<<"Found at "<<start<<", "<<end<<" and "<<i;
                flag = false;
                break;
            }
            else if(arr[start] + arr[end] < sum)
            {
                start++;
            }
            else end--;
        }
        
    }
    if(flag)
        cout<<"Not found";
    
}
int main()
{
    vector<int> arr {1, 6, 3, 9, 12, 7};
    int target = 13;
    better_tar(arr, target);

    return 0;
}