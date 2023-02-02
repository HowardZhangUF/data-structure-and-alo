#include<iostream>
using namespace std;

class CircularQueue{
	private:
		int front;
		int rear;
		int arr[5];
		int itemCount;
	
	public:
		CircularQueue(){
			itemCount = 0;
			front = -1;
			rear = -1;
			for(int i = 0;i<5;i++){
				arr[i] = 0;
			}
			
		}
		bool isEmpty(){
			if( rear == -1 &&  front ==-1){
				return true;
			}else 
			return false;
		}
		bool isFull(){
			if( (rear + 1)%5 == front){
				return true;
			}else 
			return false;
			
		}
		void enqueue(int val){
			if(isFull()){
				cout<<"Queue is full"<<endl;
				return ;
			}else if(isEmpty()){
				rear = front = 0;
			 	arr[rear] = val;
			 	
			}else{
				rear = (rear+1)%5;
				arr[rear] = val;
				
		}
		itemCount++;
	}
		int dequeue(){
			int x = 0;
			if(isEmpty()){
				cout<<"Queue is empty"<<endl;
				return x;
			}else if (rear == front){
				 x = arr[rear];
				rear = front = -1;
				return x;
			}else{
				cout<<"front value: "<<front<<endl;
				x = arr[front];
				arr[front] = 0;
				front = (front + 1)%5;
				return x;  
			}
			itemCount--;
		}
		
		int count(){
			return(itemCount); 
		}
		void display(){
			cout<<"The value in the queue are: "<<endl;
			for(int i = 0;i<5;i++){
				cout<<arr[i]<<"  ";
			}
		}
};

int main(){ 
	CircularQueue q1;
	int option, value;
	do{
		
		cout<<"\n\nWhat operation do you want to perform? Select option number. enter 0 to exit"<<endl;
		cout<<"1. Enqueue()"<<endl;
		cout<<"2. Dequeue()"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. count()"<<endl;
		cout<<"6. display()"<<endl;
		cout<<"7. Clear Screen()"<<endl;
		
		cin>>option;
		
		switch(option){
			
			case 0:
				
				break;
			case 1:
				cout<<"Enqueue operation \nEnter an item to Enqueue in the queue"<<endl;
				cin>>value;
				q1.enqueue(value);
				break;
			case 2:
				cout<<"Dnqueue operation \n Dnqueue value is: "<<q1.dequeue()<<endl;
			
				break;
			case 3:
				if(q1.isEmpty()){
					cout<<"The queue is empty"<<endl;
				}else{
					cout<<"the queue is not empty"<<endl;
				}
				break;
			case 4:
				if(q1.isEmpty()){
					cout<<"The queue is full"<<endl;
				}else{
					cout<<"the queue is not full"<<endl;
				}
				break;
			case 5:
				cout<<"count operation \ncount of item in the queue: "<<q1.count()<<endl;
				break;
			case 6:
				cout<<"Display Function Called -"<<endl;
				q1.display();
				break;
			case 7:
				system("cls");
				break;
			default:
				break;
		}
		
		
	}while(option!=0);	
	
	return 0;
} 
