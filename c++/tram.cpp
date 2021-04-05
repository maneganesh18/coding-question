#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,in,out;
	int sum=0,result=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>out;
		cin>>in;
		sum +=in;
		sum -=out;
		if(sum>result){
			result =sum;
		}
	}
	cout<<result;
}
