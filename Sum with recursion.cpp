#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

void display(string lex){
	int mid;
	mid=lex.size()/2;
	if(mid==0)
		return;
	else{
		cout<<lex.substr(0,mid)<<"-"<<lex.substr(mid)<<endl;
		display(lex.substr(0,mid));
		display(lex.substr(mid));	
	}
}
int main(){
	string str;
	getline(cin,str);
	display(str);
	return 0;
}
