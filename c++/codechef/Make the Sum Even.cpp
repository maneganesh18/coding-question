#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n,sum=0,cnt=0;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		sum +=arr[i];
	}
	if(sum%2 == 0){
		cout<<0<<endl;
	}else{
		sort(arr.begin(),arr.end());
		for(int i=0;i<n;i++){
			if(arr[i]%2 !=0){
				int res;
				int x=(arr[i]/2)-1;
				int maxs=max(0,x);
				while(maxs != 0){
					arr[i] *= maxs;
					maxs--;
				}
				cnt++;
			}
		}
		int lastsum=0;
		for(int i=0;i<n;i++){
			lastsum +=arr[i];
		}

		if(lastsum%2 ==0){
			cout<<cnt<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
	
}

int main(){
	ll n;
	cin>>n;
	for(int i=0;i<n;i++){
		solve();
	}
	
}
