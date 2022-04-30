#include<bits/stdc++.h>
using namespace std;
//Simple approach Time Complexity O(n^2)
void subarray(vector<int> arr, int sum)
{
    bool flag = true;
    for(int i = 0;i<arr.size();i++)
    {
        int tempsum = 0;
        tempsum += arr[i];
        for(int j = i+1; j<arr.size(); j++)
        {
            tempsum += arr[j];
            if(tempsum == sum)
            {
                cout<<"Found between "<<i+1<<" and "<<j+1<<endl;
                flag = false;
            }
            if(tempsum>sum)
                break;
        }
    }
    if(flag)
    {
        cout<<"Not found"<<endl;
    }

}

//Efficient Approach

void effSubarray(vector<int> arr, int sum)
{
    int low = 0, high = 0, cur_sum = arr[0], n = arr.size();
    bool flag = true;
    while(low < n && high < n){
        if(cur_sum == sum)
        {
            cout<<"Found at "<<low+1<<" and "<<high+1<<endl;
            flag = false;
            break;
        }
        else if(cur_sum < sum)
        {
            high++;
            cur_sum += arr[high];
        }
        else if(cur_sum > sum)
        {
            cur_sum -= arr[low];
            low++;
        }
    }
    if(flag)
    {
        cout<<"Not found"<<endl;
    }


}

int main()
{
    int n, sum;
    cin>>n;
    vector<int> arr(n);

    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    cin>>sum;

    // subarray(arr, sum);
    effSubarray(arr, sum);
    return 0;
}