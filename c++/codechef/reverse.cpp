#include<bits/stdc++.h>
using namespace std;

int reverse(int n ){
	int result =0;
	while(n>0){
		int a;
		a=n%10;
		result =result*10 +a;
		n=n/10;
	}
	return result;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x,data;
		cin>>x;
		data =reverse(x);
		cout<<data<<endl;
	
}
return 0;
}
