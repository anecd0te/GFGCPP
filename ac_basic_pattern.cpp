#include<bits/stdc++.h>
using namespace std;
int main(){
	/*
	int row,col;
	cin>>row>>col;
	//Rectangle pattern
	for(int i = 0;i<row;i++){
		for(int j = 0;j<col;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"--------------------------------"<<endl;
	//Hollow Rectangle Pattern Rows 5, col 4. Only boundary is printed;
	for(int i =1;i<=row;i++){
		for(int j = 1;j<=col;j++){
			if(i == 1|| i == row){
				cout<<"*";
			}
			else if(j==1||j==col){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	//Half Pyramid
	int n;
	cin>>n;
	for(int i = n;i>0;i--){
		for(int j = i;j>0;j--){
			cout<<"*";
		}
		cout<<endl;
	}
	//Half pyramid with 180 degree rotation.
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j = 1;j<=n;j++){
			if(j<=n-i){
				cout<<" ";
			}
			else{
			cout<<"*";
			}
		}
		cout<<endl;
	}
	//Half Pyramid using numbers;
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=i;j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	//Floyd's Triangle
	int n;
	cin>>n;
	int m =1;
	for(int i = 1;i<=n;i++){
		for(int j =1; j<=i;j++){
			cout<<m++<<" ";
		}
		cout<<endl;
	}
	*/
	//cout<<Butterfly Pattern<<endl;
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=i;j++){
			cout<<"*";
		}
		int space = 2*n-2*i;
		for(int j = 1;j<=space;j++){
			cout<<" ";
		}
		for(int j = 1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
		for(int i = n;i>=1;i--){
			for(int j = 1;j<=i;j++){
				cout<<"*";
		}
		int space = 2*n-2*i;
		for(int j = 1;j<=space;j++){
			cout<<" ";
		}
		for(int j = 1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}