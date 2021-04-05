	#include<iostream>
	using namespace std;
	
	int main(){
		int n;
		cin >> n;
		string k,arr[n];
		for(int i=0;i<n;i++){
			cin>> k;
			arr[i]=k;
			}
		for(int i=0;i<n;i++){
			if(arr[i].length() > 10){
				if(i == 0){
					cout<<arr[i][0]<<arr[i].length() -2<<arr[i][arr[i].length() -1];
				}else{
				cout<<"\n"<<arr[i][0]<<arr[i].length() -2<<arr[i][arr[i].length() -1];
				}
			}else{
				if(i == 0){
					cout<<arr[i];
				}else{
					cout<<"\n"<<arr[i];
				}
				
			}
		}
		
	}
