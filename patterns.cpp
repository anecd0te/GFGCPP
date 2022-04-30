#include<bits/stdc++.h>
using namespace std;
int main(){
	// int rows, var = 1;
	// cin>>rows;
	// for(int i = 1; i<=rows;i++){
	// 	for(int j = 1; j<=rows+1-i;j++){
	// 		 cout<<j<<" ";
	// 	}
	// 	cout<<endl;
	// }
	int rows;
	cin>>rows;
	//Zig Zag Pattern
	for(int i = 1;i<=3;i++){
		for(int j = 1;j<=rows;j++){
			if((i+j)%4==0 || (i==2 && j%4==0))
				cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
	//Star Pattern
	// for(int i = 1;i<=rows;i++){
	// 	for(int j = 1; j<=rows-i; j++){
	// 		cout<<" ";
	// 	}
	// 	for(int j = 1;j<=2*i-1;j++){
	// 		cout<<"*";
	// 	}
	// 	cout<<endl;
	// }
	// for(int i = rows;i>0;i--){
	// 	for(int j = 1; j<=rows-i; j++){
	// 		cout<<" ";
	// 	}
	// 	for(int j = 1;j<=2*i-1;j++){
	// 		cout<<"*";
	// 	}
	// 	cout<<endl;
	// }
	//Palindrome
	// for(int i = 1; i<=rows; i++){
	// 	for(int j = rows-1;j>=i;j--){
	// 		cout<<" ";
	// 	}
	// 	int var = i;
	// 	for(int j = 1;j<=i;j++){
	// 		cout<<var--;
	// 	}
	// 	for(int j = 1;j<i;j++){
	// 		cout<<j+1;
	// 	}
	// 	cout<<endl;
	// }
	// for(int i = 1;i<=rows;i++){
	// 	for(int j = 1;j<=rows-i;j++){
	// 		cout<<" ";
	// 	}
	// 	for(int j = 1;j<=i;j++){
	// 		if(j==i)
	// 			cout<<j;
	// 		else
	// 			cout<<j<<" ";
	// 	}
	// 	cout<<endl;
	// }
	// for(int i = 1;i<=rows;i++){
	// 	for(int j = rows-i;j>0;j--){
	// 		cout<<" ";
	// 	}
	// 	for(int j = 1;j<rows;j++){
	// 		cout<<"* ";
	// 	}
	// 	cout<<"*";
	// 	cout<<endl;
	// }

	// for(int i = 1;i<=rows;i++){
	// 	for(int j=1;j<=i;j++){
	// 		if((i+j)%2==0)
	// 			cout<<1;
	// 		else cout<<0;
	// 	}
	// 	cout<<endl;
	// }
	return 0;
}