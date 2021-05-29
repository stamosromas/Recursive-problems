#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
class Solution {
public:
    string common_seq(string s1,string s2){
        string com;
        int n1=s1.length(),n2=s2.length();
        int i,m=min(n1,n2);
        for(i=0; i<m; i++){
            if(s1[i]!=s2[i])
                break;
            com.push_back(s1[i]);
        }
        return com;
    }
    string s_help(vector<string>& strs) {
        if(strs.size()==1)
            return strs[0];
        else{
            int N=strs.size()-1;
            string s=common_seq(strs[N-1],strs[N]);
            strs.pop_back();
            strs.pop_back();
            strs.push_back(s);
            return s_help(strs);
        }
    
	}
	string longestCommonPrefix(vector<string>& strs){
    	if(strs.size()==0)
    		return "";
    	else
    		return s_help(strs);
    }
};
int main(){
	string s1,s2,s3;
	getline(cin,s1);
	getline(cin,s2);
	getline(cin,s3);
	vector<string>a;
	a.push_back(s1);
	a.push_back(s2);
	a.push_back(s3);
	Solution p;
	cout<<p.s_help(a);

}
