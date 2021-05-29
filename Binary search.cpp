#include <iostream>
using namespace std;

int bin_search(int A[],int low,int high,int x){
	if(low>high)
		return -1;
	int mid=(low+high)/2;
	if(x==A[mid])
		return mid;
	else if(x<A[mid])
		return bin_search(A,low,mid-1,x);
	else
		return bin_search(A,mid+1,high,x);
}


int main(){
	int n;
	cout<<"Give me the size of the array: ";
	cin>>n;
	int a[n],i;
	for(i=0; i<n; i++)
		cin>>a[i];
	int target;
	cout<<"Give me the number to find if is there in the array: ";
	cin>>target;
	int m=bin_search(a,0,n-1,target);
	if(m==-1)
		cout<<"The number doesnt exist in the array.";
	else
		cout<<"The number "<<target<<" exists in the position "<<m+1<<"."<<endl;
		return 0;	
}






