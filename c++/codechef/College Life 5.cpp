#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve(){
	int f,c;
	cin>>f>>c;
	vector<pair<int, int> > arr;
	for(int i=0;i<f;i++){
		int x;
		cin>>x;	
		arr.push_back({x,0});	
		
	}
	for(int i=0;i<c;i++){
		int x;
		cin>>x;
		arr.push_back({x,1});	
	}
	sort(arr.begin(),arr.end());
	ll sum=0,curr=0;
	for(auto [time, type] : arr){
		if(type != curr){
			sum++;
			cur = 1-curr;
		}
	}
	cout<<sum<<endl;
	
}

int main(){
	ll n;
	cin>>n;
	for(int i=0;i<n;i++){
		solve();
	}
	return 0;
}
