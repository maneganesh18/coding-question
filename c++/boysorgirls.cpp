#include<bits/stdc++.h>
using namespace std;

int main(){
	string m;
	int count=0;
	cin>>m;
	for(int i=0;i<m.size();i++){
		int found =m.find(m[i],i+1); 
		if(found != -1){
			count++;
		}
	}
	if((m.size()-count)%2 ==0){
		cout<<"CHAT WITH HER!";
	}else{
		cout<<"IGNORE HIM!";
		
	}
	return 0;
}
