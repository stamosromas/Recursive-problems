#include <iostream>
#include <cmath>
using namespace std;

//We want to computer the sum of: Ó(1/n^2)

double eul(int n){
	double res=0;
	if(n==1)
		return 1.0;
	else{
		res=1.0/(n*n)+eul(n-1);
		return res;
	}
}

int main(){
	double p;
	p=sqrt(eul(1000)*6);
	cout<<" pi= "<<p<<endl;
	return 0;
}
