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
		//�����pass�@�� n���СA�A��n������ * header������
  		//n: �K�K�ڪŭ��i����header�o 
  		head = n;
	}	 
	Node * nodeExists(int k){
		
	}
}; 

int main(){
	
	
	return 0;
} 
