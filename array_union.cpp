#include<bits/stdc++.h>
using namespace std;
void printUnion(int a[], int asize, int b[], int bsize){
	map<int, int> m;
	for(int i = 0; i < asize; i++){
		m.insert({a[i],i});
	}
	for (int i = 0; i < bsize; ++i)
	{
		m.insert({b[i],i});
	}
	cout<<"Union is ";
	for(auto i = m.begin(); i !=m.end();i++){
		cout<<i->first<<" ";
	}
	cout<<"\n";
}
void printIntersection(int a[], int asize, int b[], int bsize){
	int i = 0, j=0;
	sort(a,a+asize);
	sort(b,b+bsize);
	cout<<"Intersection is ";
	while(i<asize && j<bsize){
		if(a[i]>b[j]){
			j++;
		}
		else if(b[j]>a[i]){
			i++;
		}
		else{
			cout<<a[i]<<" ";
			i++;
			j++;
		}
	}
}		
int main(){
	int a[7] = { 1, 2, 5, 6, 2, 3,5 }; 
    int b[9] = { 2, 4, 5, 6, 8, 9, 4, 6, 5 }; 
 
    printUnion(a, 7, b, 9); 
    printIntersection(a,6,b,9);
}