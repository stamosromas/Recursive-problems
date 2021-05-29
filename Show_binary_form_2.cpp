#include <iostream>
using namespace std;

void show_bin(int n){
	if(n==0)
		return;
	else{
		show_bin(n/2);
		cout<<n%2;
	}
}


int main(){
	int n;
	cin>>n;
	show_bin(n);
}
