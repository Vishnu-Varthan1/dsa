#include<iostream>
#include<stack>
#include<cctype>

using namespace std;
 int evapostfix(const string & postfix){
 	stack<int>stk;
 	for(int i=0;i<postfix.length();i++){
 		char ch = postfix[i];
 		if(isdigit(ch))
 		{
 			stk.push(ch-'0');
		 }
		 else {
		 	 int val2=stk.top();stk.pop();
		 	 int val1=stk.top();stk.pop();
		 	
		 	switch(ch){
		 		case '+': stk.push(val1+val2); break;
		 		case '-':stk.push(val1-val2) ;break;
		 		case '/':stk.push(val1/val2);break;
		 		case '*':stk.push(val1*val2);break;
		 		default:
		 			cout<<"invalid";
		 			return -1;
			 }
		 }
	 }
 	
 	return stk.top();
	 	
	 
 }
 int main(){
 	string postfixx;
 	cout<<"Enter your postfix";
 	cin>>postfixx;
 	int result = evapostfix(postfixx);
 	cout<<result;
 	return 0;
 }