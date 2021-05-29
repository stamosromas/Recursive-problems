#include <iostream>
using namespace std;

int trans(int node,int num){
	if(num<10){
	if(node==0){
		if(num==0)
			return 1;
		else
			return 0;
		}
	else if(node==1){
		if(num==0)
			return 2;
		else
			return 0;
	}
	else 
		return 2;
	}
	else
		return trans(trans(node,num/10),num%10);
}

int main(){
	int n,word;
	cout<<"The program finds if word includes 2 sequent 0's"<<endl;
	n=0;
	cout<<"Enter please the word in the alphabet {0,1}: ";
	cin>>word;
	if(trans(n,word)==2)
		cout<<"The word includes two sequent 0's";
	else
		cout<<"The word doesn't include two sequent 0's";
}







