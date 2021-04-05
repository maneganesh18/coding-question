#include<iostream>
using namespace std;

int main(){
	string k;
	int count=0;
	cin>>k;
	bool flag=false;
	if(k.length() >=7){
		  for(int i=0;i<k.length()-5;i++){
			for(int j=i+1;j<i+7;j++){
				if(k[i] == k[j]){
					count +=1;
				}else{
					count =0;
					break;
				}
				if(count == 7){
					break;
				}
			}
			if(count == 7){
				cout<<"YES";
				break;
			}
		  }
		  if(count < 7){
		  	cout<<"NO";
		  }
	}else{
		cout<<"NO";
	}
}
