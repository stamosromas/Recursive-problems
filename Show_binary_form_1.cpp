#include <iostream>
using namespace std;

int show_binary(int n){
	if(n==0)
		return 0;
	else{
		return n%2+10*show_binary(n/2);
	}
}

int main(){
	int n;
	cin>>n;
	cout<<show_binary(n);
}
