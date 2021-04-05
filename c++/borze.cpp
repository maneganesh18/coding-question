#include<iostream>
#include <sstream> 
using namespace std;

int main(){
	string s,res;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i] == '.'){
			res +="0";
		}
		if(s[i]=='-' && s[i+1] == '.'){
			res +="1";
			++i;
		}
		if(s[i] == '-' && s[i+1] == '-'){
			res +="2";
			++i;
		}
	}
	cout<<res;
}
