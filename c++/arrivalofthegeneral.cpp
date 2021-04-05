#include<bits/stdc++.h>
using namespace std;

int findmaxindex(int n, int arr[]){
	int max = 0;
	for(int i=0;i<n;i++){
		if(arr[i]>arr[max]){
			max=i;
		}
	}
	return max;
}
int findminindex(int n,int arr[]){
	int min=0;
	for(int i=0;i<n;i++){
		if(arr[i]<=arr[min]){
			min=i;
		}
	}
	return min;
}

int main(){
	int n,maxindex,minindex,result;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	maxindex=findmaxindex(n,arr);
	minindex=findminindex(n,arr);
	if(arr[0]==arr[maxindex] && arr[n-1]==arr[minindex]){
		result=0;
	}else if(maxindex>minindex){
		result=maxindex+(n-minindex-2);
	}else{
		result=maxindex+(n-minindex-1);
	}
	cout<<result;
	return 0;
}
