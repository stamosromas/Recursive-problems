#include <iostream>
#include <cmath>
using namespace std;

int sum_of_divisors(int n,int i=2){
	if(i*i>n)
		return 1;
	else{
		if(n%i==0){
			if(n==i*i)
				return i+sum_of_divisors(n,i+1);
			else
				return i+n/i+sum_of_divisors(n,i+1);
		}
		else
			return sum_of_divisors(n,i+1);
	}
}

int main(){
	int n;
	cin>>n;
	cout<<sum_of_divisors(n)
}
