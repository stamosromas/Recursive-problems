#include <iostream>
#include <cstring>
using namespace std;

bool is_vowel(char c){
	char a[]={'a','e','i','o','u'};
	int i=0;
	while(a[i]!=c)
		i++;
	if(i<5)
		return true;
	else
		return false;
}

int countVowels(string str) {
	if(str.empty())
		return 0;
	else{
		if(is_vowel(str[str.length()-1]))
				return 1+countVowels(str.substr(0,str.length()-1));
		else
			return countVowels(str.substr(0,str.length()-1));
	}
}


int main(){
	string lex;
	getline(cin,lex);
	cout<<countVowels(lex)<<endl;
	return 0;
}
