#include<bits/stdc++.h>
using namespace std;
bool good(int mid, int r, int g, int b){
	return (r-mid)+(b-mid)+g>=mid;
}
int color(int n, int red, int green, int blue){
	int left = 0;
	int right = min(n,min(red,blue));
	//cout<<"minimum "<<right;
	int ans;
	while(left<=right){
		int mid = left + (right-left)/2;
		if (good(mid, red, green, blue)){
			ans = mid;
			left = mid+1;
		}
		else right = mid-1;
	}
	return ans;
}
int main(){
	int red, green, blue, n,t;
	cin>>t;
	while(t--){
		cin>>n>>red>>green>>blue;
		int ans = color(n,red,green,blue);
		cout<<ans<<endl;
	}

}
/*
https://www.youtube.com/watch?v=bzmheyCVGTQ&list=PLQXZIFwMtjox7Fi4MQVeEojrFzN4OGjrS&index=2
in the end.
Sample input
3
4 3 3 4
4 4 1 4
2 4 1 4

Sample output
3
3
2
*/