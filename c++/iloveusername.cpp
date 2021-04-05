#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,cnt=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int lowest,highest;
	lowest=arr[0];
	highest=arr[0];	
	for(int i=1;i<n;i++){
		if(arr[i]>highest){
			cnt++;
			highest=arr[i];
		}else if(arr[i]<lowest){
			cnt++;
			lowest =arr[i];
		}
	}
	cout<<cnt;
	return 0;
}
