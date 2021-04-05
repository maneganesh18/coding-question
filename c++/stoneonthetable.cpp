#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,count=0;
	cin>>n;
	string ch;
	cin>>ch;
		for(int i=0;i<n-1;i++){
			if(ch[i] == ch[i+1]){
				count++;	
			}
		}
		cout<<count;
		return 0;
}
