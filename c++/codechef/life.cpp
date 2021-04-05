#include<iostream>
#include<string>
using namespace std;

int main(){
	string n;
	while(1){
		cin >> n;
		if(n == "42" || n=="")break;
		cout<<n<<endl;
	}
	return 0;
}
