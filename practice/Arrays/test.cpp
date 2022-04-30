#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {3, 1, 2, 5};
    do {
        cout << arr[0] << " " << arr[1] << " " << arr[2]<<" "<<arr[3] << "\n";
    } while (next_permutation(arr.begin(), arr.end()));
    

    return 0;
}