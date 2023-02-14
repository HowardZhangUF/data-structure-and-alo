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
	int len=s.length();//字符串長度 
	int mid=len/2;//字符串中間位置 取整 
	for(int i=0;i<mid;i++){
		stk.push(s[i]);//壓入字符串中間之前的字符 
	}
	for(int i=(len%2==0?mid:mid+1);i<len;i++){
		if(s[i]!=stk.top()){//找到不對等的就返回 輸出不是迴文 
			cout<<"不是迴文"<<endl; 
			return 1;
		}
		stk.pop(); //出棧 
	}
	cout<<"是迴文"<<endl; 
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
