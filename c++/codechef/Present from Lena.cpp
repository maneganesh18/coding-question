#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		if(i==0){
			cout<<0<<endl;
		}else{
			for(int j=i;j>0;j--){
				cout<<j<<" ";
			}
			cout<<0<<" ";
			for(int k=1;k<=i;k++){
				cout<<k<<" ";
			}
			cout<<endl;
		}
	}
}
