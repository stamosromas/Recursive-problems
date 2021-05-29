#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	cout<<str.substr(0,str.length()-1);
}
