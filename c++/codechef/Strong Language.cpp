#include<bits/stdc++.h>
using namespace std;

int solve(){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		int cnt;
		int temp=k;
		if(s[i] == '*'){
			cnt=1;
			for(int j=i+1;j<=i+k-1;j++){
				if(s[j]=='*'){
					cnt++;
				}else{
					break;
				}
			}
			
		}
		if(cnt == k){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
	
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
