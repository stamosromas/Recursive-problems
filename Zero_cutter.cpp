#include <iostream>
using namespace std;

int zero_cutter(int x){
	if(x%10==0)
		return zero_cutter(x/10);
	else
		return x;
}


int main(){
	int n;
	long long int m;
	m=INT_MAX+1;
	cout<<m;
	n=2*m;
	cout<<endl;
	cout<<n;
	return 0;
}

