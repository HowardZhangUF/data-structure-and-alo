#include <iostream>
#include <stack>

using namespace std;

#include<iostream>
#include<stack>
#include<string> 
using namespace std;
int main(void){
	stack<char> stk; 
	string s; 
	cin>>s;
	int len=s.length();//�r�Ŧ���� 
	int mid=len/2;//�r�Ŧꤤ����m ���� 
	for(int i=0;i<mid;i++){
		stk.push(s[i]);//���J�r�Ŧꤤ�����e���r�� 
	}
	for(int i=(len%2==0?mid:mid+1);i<len;i++){
		if(s[i]!=stk.top()){//��줣�ﵥ���N��^ ��X���O�j�� 
			cout<<"���O�j��"<<endl; 
			return 1;
		}
		stk.pop(); //�X�� 
	}
	cout<<"�O�j��"<<endl; 
	return 0;}
/*stack invert(stack num){
	 if (!num.empty()){
	 	stack inum;
	 	inum.push()=num.pop();
	 	return inum;
	 }else
	 	cout<<"stack is empty.";
}

bool checkp(stack inum,stack num){
	for (int i = 0;i<8;i++){
			if (num[i] = inum[i]){
				return ture;
			}else
				return false;	
	}
	
}



stack st  = [s,t,r,i,n,g];
invert(st);


int main() 
{
	stack num = [];
	cout<<"enter the stack"<<endl;

	
	for (int i = 0;i<8;i++){
		cin>>stack[i];
	}
	
	stack inum = invert(st);
	cout<<inum<<endl;
	
	bool c = checkp(inum);
	if (c){
		cout<<"p"<<endl;
	}else cout<<"n"<<endl;
} */
