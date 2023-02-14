#include <iostream>

using namespace std;

class Node{
	public: 
	int key;
	int data;
	Node *next;
	
	Node(){
		key = 0;
		data = 0;
		next = NULL;
	}
	Node (int k,int d){
		key = k;
		data = d;
		next = NULL;
	}/*constructor overloading */
}; 

class Stack{
	public:
		Node *top;//指向NODE Class 的物件 
		Stack()
		{
			top = NULL;
		}
	
	bool isEmpty(){
		if (top  == NULL){
			return true;
		}else
		{
			return false;
		}
			
	}
	 
	 
};

int main ()
{
	Stack s1;
	int option , position,key,data;
	
	do{
		cout << "What operation do you want to perform?" <<
	    "Select Option number. Enter 0 to exit." << endl;
	    cout << "1. Push()" << endl;
	    cout << "2. Pop()" << endl;
	    cout << "3. isEmpty()" << endl;
	    cout << "4. peek()" << endl;
	    cout << "5. count()" << endl;
	    cout << "6. display()" << endl;
	    cout << "7. Clear Screen" << endl << endl;
	    cin >> option;
		
	Node * new_node = new Node; 
	/*兩memory 
	adv : make the new Node global variable
	while loop執行多次不會把用heap存的物件刪掉
	*/
	//Node n1 = new Node;
	/*指派一個記憶體位置 (區域變數只存在main 裡面
*/	
	}while (option!=0)


	
}

