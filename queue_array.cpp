#include<bits/stdc++.h>
#define MAX_SIZE 101
using namespace std;
class Queue{
private:
	int A[MAX_SIZE];
	int front, rear;
public:
	Queue(){
		rear = -1;
		front = -1;
	}
	bool isEmpty(){
		return(front == -1 && rear == -1);
	}
	bool isFull(){
		return(rear+1)%MAX_SIZE == front ? true : false;
	}
	void Enqueue(int x){
		cout<<"Enqueuing :: "<<x<<" \n";
		if (isFull()){
			cout<<"Error : Queue is full"<<"\n";
			return;
		}
		if (isEmpty()){
			front =  rear = 0;
		}
		else{
			rear = (rear + 1)%MAX_SIZE;
		}
		A[rear] = x;
	}
	void Dequeue(){
		cout<<"Dequeuing::"<<"\n";
		if (isEmpty()){
			cout<<"Error :: Queue is empty"<<"\n";
			return;
		}
		else if(front == rear){
			front = rear = -1;
		}
		else{
			front = (front+1)%MAX_SIZE;
		}

	}
	int Front(){
		if(front==-1){
			cout<<"Error :: Cannot return from empty Queue"<<"\n";
			return -1;
		}
		else return A[front];
	}
	void Print(){
		int count = (rear+MAX_SIZE-front)%MAX_SIZE+1;
		cout<<"Queue is :: ";
		for(int i = 0; i < count; i++){
			int index = (front+i)%MAX_SIZE;
			cout<<A[index]<<" ";
		}
		cout<<"\n";
	}

};
int main(){
	Queue Q;
	Q.Enqueue(2);
	Q.Enqueue(3);
	Q.Enqueue(7);
	Q.Enqueue(8);
	Q.Print();
	Q.Dequeue();
	Q.Print();
	return 0;
}