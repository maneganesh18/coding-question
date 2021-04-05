#include<bits/stdc++.h>
using namespace std;

int main(){
	string ch;
	cin>>ch;
	if(islower(ch[0])){
		ch[0] = toupper(ch[0]);
	}
	cout<<ch;
	return 0;
}
