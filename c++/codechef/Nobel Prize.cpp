#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve(){
	int n,m;
	bool res=false;
	cin>>n>>m;
	int arr[m] = { 0 };
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		arr[x-1]=1;
	}
	for(int i=0;i<m;i++){
		if(arr[i]== 0){
			cout<<"Yes"<<endl;
			return 0;
		}
	}

	cout<<"No"<<endl;
	return 0;
}

int main(){
	ll n;
	cin>>n;
	for(int i=0;i<n;i++){
		solve();
	}
	return 0;
}
