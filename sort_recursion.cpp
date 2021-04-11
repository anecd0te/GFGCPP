#include<bits/stdc++.h>
using namespace std;
void insert(vector<int> &v, int temp){
	if(v.size()==0 || v[v.size()-1]<=temp){
		v.push_back(temp);
		return;
	}
	int val = v[v.size()-1];
	v.pop_back();
	insert(v, temp);
	v.push_back(val);
}
void sort(vector<int> &v){
	//if there's single element
	if(v.size()<=1)
		return;
	//storing last element
	int temp = v[v.size()-1];
	//popping last element
	v.pop_back();
	sort(v);
	insert(v, temp);
}
int main(){
	vector <int> arr;
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(7);
	arr.push_back(6);
	arr.push_back(4);
	arr.push_back(5);
	arr.push_back(9);
	for(auto i = arr.begin(); i!=arr.end();i++){
		cout<<*i<<" ";
	}
	sort(arr);
	cout<<"\n Sorted array by insertion sort using recurion: ";
	for(auto i = arr.begin(); i!=arr.end();i++){
		cout<<*i<<" ";
	}
	return 0;
}