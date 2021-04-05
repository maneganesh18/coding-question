#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	
		int r,o,c,rtime,maxrun;
	cin>>r>>o>>c;
	rtime=(20-o)*6;
	maxrun=rtime*6;
	if((c+maxrun)>r){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
}
