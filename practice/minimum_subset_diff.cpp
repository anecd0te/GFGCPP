//https://www.geeksforgeeks.org/partition-a-set-into-two-subsets-such-that-the-difference-of-subset-sums-is-minimum/
//https://www.youtube.com/watch?v=-GtpxG6l_Mc&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=10&t=1225s

#include<bits/stdc++.h>
using namespace std;
int mindiff(int arr[], int n, int sumcalculated, int totalsum){
    if(n==0){
        return abs((totalsum-sumcalculated)-sumcalculated);
    }
    return min(mindiff(arr, n-1, sumcalculated+arr[n-1],totalsum), mindiff(arr, n-1, sumcalculated, totalsum));
}
int main(){
    // int arr[] = {3,1,4,2,2,1};
    int arr[] = {1,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum+= arr[i];
    }
    cout<<mindiff(arr,n,0,sum);
}