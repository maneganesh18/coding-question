#include<bits/stdc++.h>
using namespace std;

void solve(){
	double k1,k2,k3,v,sum,res;
	cin>>k1>>k2>>k3>>v;
	sum=k1*k2*k3*v;
	res=100/sum;
	double rounded = floor((res * 100) + .5) / 100;
	if(rounded < 9.58){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
