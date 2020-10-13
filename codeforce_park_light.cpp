#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		int arr[MAX];
		cin>>n;
		for(int i = 0;i < n; i++){
			cin>>arr[i];
		}
		int gr = 1;
		for(int i = 0;i < n; i++){
			int ln,j,num = 0;
			while(j<n){
				if(ar[j]>=gr&&ar[j]>ln){
					num+=1
				}
				j++;	
			}
			if((gr+num-1)>=gr){
				gr=gr+num;
				ln = ar[j];
			}

		}

	}
	return 0;
}