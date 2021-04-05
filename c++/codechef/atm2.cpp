#include<bits/stdc++.h>
using namespace std;

int main(){
	double x,bal;
	cin>>x>>bal;
	float d=fmod(x,5.0);
	cout << fixed << setprecision(2);
	if(d ==0){
		if(x+0.50 <= bal){
			cout<<setprecision(2)<<fixed<<bal-x-0.50;
		}else{
			cout<<bal;
		}
	}else{
		cout<<bal;
	}
}
