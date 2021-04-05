#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,maxjoy=0;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		int fi,ti,joy;
		cin>>fi>>ti;
		if(ti>k){
			joy=fi-(ti-k);
			if(joy>0){
				if(joy>maxjoy){
				maxjoy=joy;
				}
			}else{
				if(joy<maxjoy){
				maxjoy=joy;
				}
			}
		}else{
			if(fi>maxjoy){
			maxjoy=fi;
			}
		}
		
	}
	cout<<maxjoy<<endl;
	return 0;
	
}
