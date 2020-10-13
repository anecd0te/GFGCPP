#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int one,aai,jee;
	for(int i = 0; i < 5 ; i++ ){
		for(int j = 0; j<5 ; j++){
			cin>>one;
			if (one == 1){
				jee = j;
				break;
			}

		}
		if(one==1){
			aai = i;
			break;
		}

	}
	int ans = abs(2-aai)+abs(2-jee);
	cout<<ans;
	return 0;
}