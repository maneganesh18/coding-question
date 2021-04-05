#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int u,v,a,s,x,vsqur;
	cin>>u>>v>>a>>s;
	x=(u*u)-(2*a*s);
	vsqur=v*v;
	
	if(x<=vsqur){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	
}

int main(){
	ll n;
	cin>>n;
	for(int i=0;i<n;i++){
		solve();
	}
	
}
