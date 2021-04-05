#include<iostream>
using namespace std;

int main(){
	string k,res ="NO";
	cin>> k;

	for(int i=0;i<k.size();i++){
		if(k[i]>=33&& k[i]<=126){
		
		if(k[i]=='H' || k[i]=='Q' || k[i]=='9' )
		{
			res="YES";
			break;
		}
	}
	}
	cout<<res;

	return 0;

}
