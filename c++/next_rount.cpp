#include<iostream>
using namespace std;

int main(){
	int n,k,x,count=0;
	bool flag;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];	
	}
	
	if(arr[k-1] == 0){
		for(int i=0;i<n;i++){
			if(arr[i] >arr[k-1]){
				count +=1;
			}
		}
	}else if(arr[k-1]>0){
		for(int i=0;i<n;i++){
			if(arr[i]>=arr[k-1]){
				count += 1;
			}
		}
	}

	cout<< count;
}

	
