#include <iostream>
using namespace std;

int pen(int n){
	if(n==1)
		return 1;
	else
		return (n-1)*5+pen(n-1);
}
int main(){
	int n;
	cin>>n;
	cout<<pen(n);
	return 0;
}
