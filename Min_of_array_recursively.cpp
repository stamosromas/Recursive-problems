#include <iostream>
#include <cstdlib>
using namespace std;

int min_elem(int arr[],int n){
	if(n==1)
		return arr[0];
	else
		return min(arr[n-1],min_elem(arr,n-1));
}

int main(){
	int n,i;
	cout<<"Give me the size of the array: ";
	cin>>n;
	int a[n];
	int mi,ma;
	cout<<"The ranges of the random numbers: ";
	cin>>mi>>ma;
	for(i=0; i<n; i++){
		a[i]=mi+rand()%(ma-mi);
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"The minimum element of the array is: "<<min_elem(a,n)<<endl;
	return 0;
}
