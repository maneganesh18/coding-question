#include<iostream>
using namespace std;

int main(){
	int n,x=0;
	cin >>n;
	string k,arr[n];
	for(int i=0;i<n;i++){
		cin>>k;
		arr[i]=k;
	}
	for(int i=0;i<n-1;i++){
		if(arr[i][i] == '+' && arr[i][i+1] == '+'){
			x +=1;
		}else if(arr[i][i] == '-' && arr[i][i+1] == '-'){
			x -=1;
		}
	}
	cout<<x;
	
}
