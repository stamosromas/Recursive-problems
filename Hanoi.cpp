#include <iostream>
using namespace std;

void hanoi(int n,char a,char b,char c){
	if(n==0)
		return;
	else{
		hanoi(n-1,a,c,b);
		cout<<"Move disc "<<n<<" from "<<a<<" to "<<c<<endl;
		hanoi(n-1,b,a,c);
	}
}

int main(){
	int n;
	cout<<"Enter the total number of discs: ";
	cin>>n;
	hanoi(n,'A','B','C');
}
