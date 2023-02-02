#include<iostream>
using namespace std;
class Node{
 	public:
 		int key;
 		int data;
 		Node * next; 
 		
		Node(){
 			key = 0;
 			data = 0;
 			next = NULL;
		 }
		Node(int k,int d){
 			key = k;
 			data = d;
 			
		 }
};

class SinglyLinkedList{
	public:
		 Node * head ;
		 
	SinglyLinkedList(){
		head = NULL;
	}
	SinglyLinkedList(Node * n){
		//先手動pass一個 n指標，再把n指派給 * header的指標
  		//n: 嘿嘿我空降進來變header囉 
  		head = n;
	}	 
	Node * nodeExists(int k){
		
	}
}; 

int main(){
	
	
	return 0;
} 
