#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,l,r,left(0),right(0),sum;
	cin>>n;

	
	for(int i=0;i<n;i++){
		cin>>l;
		cin>>r;
		left +=l;
		right +=r;
	}
	
	sum =min(left,n-left)+min(right,n-right);

	 
	 cout<<sum;


}





