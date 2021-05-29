#include <iostream>
using namespace std;

int trans(int node,int num){
	if(num>10)
		return trans(trans(node,num/10),num%10);
	else if(num>=0 && num<=9){
		if(node==0){
			if(num==0)
				return 0;
			else if(num==1)
				return 1;
		}
		else if(node==1){
			if(num==0)
				return 0;
			else if(num==1)
				return 2;
		}
		else if(node==2)
			return 2;
	}
}

int main(){
	int situation=0,word;
	cout<<"Enter a word in the alphabet S={0,1}*: ";
	cin>>word;
	cout<<"Now I will find whether this number includes two 1's sequently!"<<endl;
	if(trans(situation,word)==2)
		cout<<"The number includes two 1's sequently.";
	else
		cout<<"The number doesn't include two 1's sequently.";
}
