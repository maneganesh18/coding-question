#include <iostream>
#include<string>
#include<sstream>

using namespace std;

string split(string s){
	
}

int main() {
	// your code goes 
	int x,y;
	char a,g,space;
	string ch;
	getline(cin,ch);
	stringstream ss(ch);
	ss>>x>>a>>g>>y;
	if(a == '<'){
		 if(x <= y) {
		 	cout<<1;
		}else{
			cout<<0;
		}
	}else if( a == '>'){
		if(x >= y) {
		 	cout<<1;
		}else{
			cout<<0;
		}
	}else if(a == '='){
	if(x == y) {
		 	cout<<1;
		}else{
			cout<<0;
		}
	}
	
	
	return 0;
}
