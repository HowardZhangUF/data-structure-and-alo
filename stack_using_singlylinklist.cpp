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
		Node *top;//���VNODE Class ������ 
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
	/*��memory 
	adv : make the new Node global variable
	while loop����h�����|���heap�s������R��
	*/
	//Node n1 = new Node;
	/*�����@�ӰO�����m (�ϰ��ܼƥu�s�bmain �̭�
*/	
	}while (option!=0)


	
}

