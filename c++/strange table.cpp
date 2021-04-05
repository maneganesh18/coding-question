#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int z;
	cin>>z;
	
	
	for(int i=0;i<z;i++){
		ll n,m,x;
		ll resi,resj;
		cin>>n>>m>>x;
			ll cnt=1;
		if(n*m ==x){
			cout<<x<<endl;
		}else{
			for(ll j=0;j<n;j++){
			ll h=1;
			for(ll k=0;k<m;k++){
			if(k==0){
				h +=j;
				if(h ==x ){
					resi=j;
					resj=k;
					break;
				}	
			}else{
				h +=n;
				if(h ==x ){
					resi=j;
					resj=k;
					break;
			}
			}
			}
		}
		for(ll j=0;j<n;j++){
			for(ll k=0;k<m;k++){
			if( resi==j &&resj ==k){
				cout<<cnt<<endl;
				break;
			}
			cnt++;
			}
		}
		}
	}
		
}


