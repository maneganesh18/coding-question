#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	bool flag;
	for(int i=n+1;i<=m;i++){
		for(int j=2;j<i;j++){
			if(i%j != 0){
				if(i<m){
					cout<<"NO";
					return 0;
				}
			}
		}
	}
	cout<<"YES";
	
return 0;
}
