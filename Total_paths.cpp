/*This program computes the  total  paths 
that exist if you begin from  a point and 
only accepted movements are left and down.

#include <iostream>
using namespace std;

int tot_paths(int x,int y){
	if(x==0||y==0)
		return 1;
	else
		return tot_paths(x-1,y)+tot_paths(x,y-1);
}

int main(){
	int x,y;
	cin>>x>>y;
	cout<<tot_paths(x,y);
}
