#include<bits/stdc++.h>
using namespace std;
struct Pair{
    int min;
    int max;
};

Pair getMinMax(vector<int> arr)
{
    Pair minmax;
    int i = 0;
    int n = arr.size();

    if(n&1)
    {
        minmax.min = arr[0];
        minmax.max = arr[0];

        i+=1;
    }
    else
    {
        if(arr[0] > arr[1])
        {
            minmax.max = arr[0];
            minmax.min = arr[1];
        }
        else
        {
            minmax.min = arr[0];
            minmax.max = arr[1];
        }
        i+=2;
    }

    while(i<n-1)
    {
        if(arr[i] > arr[i+1])
        {
            if(arr[i] > minmax.max)
            {
                minmax.max = arr[i];
            }
            if(arr[i+1] < minmax.min)
            {
                minmax.min = arr[i+1];
            }
        }
        else
        {
            if(arr[i+1] > minmax.max)
            {
                minmax.max = arr[i+1];
            }
            if(arr[i] < minmax.min)
            {
                minmax.min = arr[i];
            }
        }
        i += 2;
    }
    return minmax;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    Pair mima = getMinMax(arr);
    cout<<"Minimum element is "<<mima.min<<endl;
    cout<<"Maximum element is "<<mima.max<<endl;

    return 0;
}