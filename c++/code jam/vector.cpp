#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,sum=1;
	cin>>x;
	vector<int> arr;
	for(int i=0;i<x;i++){
		int z;
		cin>>z;
		arr.push_back(z);
	}
	sort(arr[sum],arr.end());
	for(int i=0;i<x;i++){
		cout<<arr[i]<<endl;
	}
	
}
