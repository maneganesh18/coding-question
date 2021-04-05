#include<bits/stdc++.h>
using namespace std;

int arr[3][3];

void in(int x,int y,int inc){
	arr[x][y] += inc;
	if(y+1 <3){
		arr[x][y+1] +=inc;
	}
	if(y-1>-1){
		arr[x][y-1] +=inc;
	}
	if(x+1<3){
		arr[x+1][y] +=inc;
	}
	if(x-1>-1){
		arr[x-1][y] +=inc;
	}
}

int main(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			int x;
			cin>>x;
			in(i,j,x);
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(arr[i][j]%2 == 0){
				cout<<"1";
			}else if(arr[i][j]%2 != 0){
				cout<<"0";
			}	
		}
		cout<<endl;
	}
	return 0;	
}
