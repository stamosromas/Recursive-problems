#include <iostream>
using namespace std;

int pascal(int row,int col){
	if(col==0||col==row)
		return 1;
	else if(col==1||(col+1)==row)
		return row;
	else
		return pascal(row-1,col-1)+pascal(row-1,col);
}

int main(){
	int i;
	for(i=0; i<10; i++)
		cout<<pascal(2*i,i)<<" ";
}
