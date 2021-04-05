#include<bits/stdc++.h>
using namespace std;

void solve(){
	int u,v,a,s;
	cin>>u>>v>>a>>s;
	if(u ==v){
		cout<<"YES"<<endl;
	}else{
		int x =sqrt((u*u)+(2*a*s));
		if(x<=v){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		solve();
	}
	
}
