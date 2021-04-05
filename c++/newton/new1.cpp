#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,har=0,harprof=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int j=0;j<n;j++){
		if(j%2==0){
			harprof +=arr[j];
		}else{
			har +=arr[j];
		}
	}
	if(har>harprof){
		cout<<"Harry"<<endl;
	}else if(har<harprof){
		cout<<"Professor"<<endl;
	}else if(har == harprof){
		cout<<"Professor"<<endl;
	}
	
}
