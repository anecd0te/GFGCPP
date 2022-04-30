#include<iostream>
#include<vector>
using namespace std;
class MyQueue{
private:
	vector<int> data;
	int p_start;
public:
	MyQueue(){
		p_start=0;
	}
	bool enQueue(int x){
		data.push_back(x);
		return true;
	}
	bool deQueue(){
		if(isempty())
			return false;
		p_start++;
		return true;
	}
	int front(){
		return data[p_start];
	}
	bool isempty(){
		return p_start>=data.size();
	}
};
int main(){
	MyQueue q;
	q.enQueue(5);
	q.enQueue(6);
	q.enQueue(7);
	if(!q.isempty()){
		cout<<q.front()<<"\n";
	}
	q.deQueue();
	if(!q.isempty()){
		cout<<q.front();
	}
}