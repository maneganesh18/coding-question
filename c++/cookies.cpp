#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,sum=0,cnt=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum +=arr[i];
	}
	if(sum%2 == 0){
		for(int i=0;i<n;i++){
			if(arr[i]%2 ==0){
				cnt++;
			}
		}
	}else{
		for(int i=0;i<n;i++){
			if(arr[i]%2 !=0){
				cnt++;
			}
		}
	}
	cout<<cnt;
}
