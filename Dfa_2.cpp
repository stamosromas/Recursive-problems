#include <iostream>
using namespace std;

int trans(int node,int num){
	if(num<10){
		if(node==0){
			if(num==1)
				return 0;
			else
				return 1;
		}
		else{
			if(num==0)
				return 1;
			else
				return 0;
		}
	}
	else
		return trans(trans(node,num/10),num%10);
}

int main(){
	cout<<"This program finds whether a number ends up with at least one 0!"<<endl;
	int node,num;
	node=0;
	cout<<"Enter a number in alphabet S={0,1}* : ";
	cin>>num;
	if(trans(node,num)==1)
		cout<<"The number ends up with 0";
	else
		cout<<"The number doesn't end up with 0";
}
