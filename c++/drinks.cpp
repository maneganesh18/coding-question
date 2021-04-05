#include<bits/stdc++.h>
using namespace std;

int main(){
	float res;
	float n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		sum +=x;
	}
	res=sum/n;
	cout<<res;
}
