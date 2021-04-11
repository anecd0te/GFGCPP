#include<bits/stdc++.h>
using namespace std;
void Insert(vector<int> &v, int temp){
	if(v.size()==0 || v[v.size()-1]<=temp){
		v.push_back(temp);
		return;
	}
	int val = v[v.size()-1];
	v.pop_back();
	Insert(v, temp);
	v.push_back(val);
}
void Sorted(vector<int> &arr){
	if(arr.size()<=1){
		return;
	}
	int temp = arr[arr.size()-1];
	arr.pop_back();
	Sorted(arr);
	Insert(arr, temp);
}
int main(){
	vector<int> arr;
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(7);
	arr.push_back(6);
	arr.push_back(4);
	arr.push_back(5);
	arr.push_back(9);
	for(auto i = arr.begin();i!=arr.end();i++){
		cout<<*i<<" ";
	}
	Sorted(arr);
	cout<<"Sorted array is \n";
	for(auto i = arr.begin();i!=arr.end();i++){
		cout<<*i<<" ";
	}
	return 0;
}