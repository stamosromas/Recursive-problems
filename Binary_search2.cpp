#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int bin_ser(int a[],int num,int init,int fin){
	if(init>fin)
		return 0;
	else{
		int mid=(init+fin)/2;
		if(a[mid]==num)
			return mid;
		else if(num<a[mid])
			return bin_ser(a,num,init,mid-1);
		else if(num>a[mid])
			return bin_ser(a,num,mid+1,fin);
	}
}

int main(){
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int a[n],i;
	a[0]=rand()%10;
	cout<<a[0]<<" ";
	for(i=1; i<n; i++){
		a[i]=a[i-1]+rand()%(10+i);
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter the number to tell you the position that exists in: ";
	int num;
	cin>>num;
	cout<<num<<" exists in position "<<bin_ser(a,num,0,n)+1<<endl;
	return 0;
}
