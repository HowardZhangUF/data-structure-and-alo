#include<iostream>
using namespace std;

class Node{
		
	punblic:
		int key;
		int data;
		Node* next;
		Node * previous;
	
		Node(){
			key = 0;
			data = 0;
			next = NULL;
			previous = NULL;
		}
		Node(){
			key = k;
			data = d;
		}		
};

class DoublyLinkedList{
	
	public:
		Node * head;
		
		DoublyLinkedList(){
			head = NULL;
		}
		DoublyLinkedList(Node * n){
			head = n;
		}
		//1.check if node exist
		
		Node* nodeExists(int k){
			Node* temp = NULL;
			Node * ptr = head;
			while(ptr!=NULL){
				if(ptr->key == k){
					temp = ptr;
				}else{
					ptr = ptr->next;
				}
			return temp;
			}
			
		}
		//2.append Node
		void appendNode(Node * n){
			if(nodeExists(n->key)!=NULL){
				cout<<"Node already exist with key value";
			}else{
				if(head == NULL){
					head = n;
					cout<<"Node Appended"<<end
				}else{
					Node * ptr = head;
					while(ptr->next != NULL){
						ptr = ptr->next;//traverse
					}
					ptr->next = n;
					n->prevoius = ptr;
					cout<<"Node Appended"<<endl;
				}
			}
		}
		//3.prepend node
		void prependnode(){
				if(nodeExists(n->key)!=NULL){
					cout<<"Node already exist with key value:"<<n->key<<endl;
			}else{
				if(head == NULL){
					head = n;
					cout<<"Node prepended"<<end
				}else{
					head->previous = n;
					n->next = head;
				
				
					head = n;
					cout<<"node prepended"<<endl;
				}
			}
		
		}
		
		//4. insert a node after particular node
		void insertNodeAfter(int k, Node * n)
		{
			Node * ptr =nodeExists(k);
			if(ptr == NULL)
			{
				cout<<"no node exist with key value:"<<k<<endl;//Check if the key of the node which we want to insert after it is exist in the list  
			}
			 else
			{
				if(nodeExists(n->k)!=NULL)
				{//check if the  node which we want to insert match the same key exist in the list 
					cout<<"node already exsit with key value:"<<n->key<<endl;
				}
				else
				{
					Node * nextnode = ptr->next //point the next to  of the temp(3(ptr return the node that we want to insert our new node after)
					if(ptr->next == NULL)
					{
						ptr->next = n;
						n->previous = ptr;
						cout<<"node inserted at the end"<<endl;	
					}
					else
					{
						n->next = nextnode; 
						n->next = nextnode;
						n->previous = ptr;
						ptr->next = n; 
						
						cout<<"node inserted in between"<<endl;	
					}
					//cout<<"inserting"<<endl;
				}
			}
			
		}
		
		//5.Delete node by unique key. Bascially  
		void deleteNodeByKey(int k)
		{
			Node * ptr = nodeExists(k);
			if(ptr == NULL)
			{
				cout<<"No Node exists with the key value: "<<k<<endl;
			}
			else
			{
				if ()
				{
					if(head->key == k)
					{
						head = head->next;
						cout<<"Node unlike with the key value :"<<k<<endl;
					}
					else
					{
						Node * nextNode = ptr->next;
						Node * prevNode = ptr->previous;
						//delete at the end
						if()
						{
							prevNode = NULL;
							cout<<"Node delete at the end"<<endl;	
						}
						eles
						{
							nextNode->previous = prevNode;
							prevNode->next = nextNode;
							cout<<"NODE delete in between"<<endl;
						}
				 	
					}
				}
			}
		}
		
		//6.update Node
		void updateNode(int k,int d)
		{
			Node * ptr = nodeExists(k)
			if(ptr == NULL)
			{
				cout<<"No node exist with key: "<<k<<endl;
			}else
			{
				ptr->date = d;
				cout<<"Node update successfully"<<endl;
			}
		}
		
		//7.printing
		void printList() 
		{
			if(head == NULL)
			{
				cout<<"No node in Doubly linked list";
			}
			else
			{
				cout<<"Doubly Linked List Value: ";
				Node * ptr = head;
				while(head->next!=NULL)
				{
					cout<<"("<<ptr->key<<","<<ptr->data<<") <--> "<<endl;
					ptr = ptr->next;
				}	
			}
		}
};

int main(){
	DoublyLinkedList obj;
		int option;
		int data1,key1,k1;
	do {
		cout<<"\nWhat number do you want to perform? Select Option number. Enter 0 to exit"<<endl;
		cout<<"1. appendNode()"<<endl; 
		cout<<"2. prependNode()"<<endl; 
		cout<<"3. insertNodeAfter()"<<endl; 
		cout<<"4. deleteNodeByKey()"<<endl; 
		cout<<"5. updateNodeByKey()"<<endl; 
		cout<<"6. print()"<<endl; 
		cout<<"7. Clear Screen()"<<endl<<endl; 
			
		cin<<option;
		Node * n1 = new Node()
			
		//Node n1;
		
		switch
		{
			caes 0:
				break;
			caes 1:
				cout<<"Append Node Operation \nEnter key & data of the Node to be appended"<<endl;
				cin>>key1;
				cin>>data1;
				n1->key = key1;
				n1->data = data1;
				obj.appendNode(n1);
				break;
			caes 2:
				cout<<"Pppend Node Operation \nEnter key & data of the Node to be Pppended"<<endl;
				cin>>key1;
				cin>>data1;
				n1->key = key1;
				n1->data = data1;
				obj.prependNode(n1);
			caes 3:
				cout<<"Insert Node Operation \nEnter key of existing Node after which you want to insert this new node: "<<endl;
				cin>>k1;
				cout<<"Enter key & data of the new node first: "<<endl;
				cin>>data1;
				n1->key = key1;
				n1->data = data1;
				obj.insertNodeAfter(k1,n1);
			caes 4:
				cout<<""<<endl;
			caes 5:
			caes 6:
			caes 7:	
		}
		
	}
	while(1)
	
	
	return 0;
} 
