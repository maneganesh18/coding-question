#include<iostream>
using namespace std;

int main(){
	int test,n;
	cin>>test;
	for(int i=0;i<test;i++){
		cin>>n;
		int arr[n],count=1 ,temp=0;
		for(int j=0;j<n;j++){
			cin>>arr[j];
		}
		for(int x=1;x<n;x++){
			if(arr[x] == arr[x-1]){
				count +=1;
			}else{
				if (temp <count){
					temp =count;
					count =1;
				}
			}
		}
		if(temp ==0 ){
			cout<<count<<"\n";
		}else{
			cout<<temp<<"\n";
		}
		
	}
}
