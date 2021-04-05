#include<iostream>
using namespace std;

int main(){
	int n,x,count=0;
	cin >> n;
	int arr[n][3];
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin >> arr[i][j];
		}
	}
	for(int i=0;i<n;i++){
		int onecount=0;
		for(int j=0;j<3;j++){
			if(arr[i][j] == 1){
				onecount += 1;
			}
			if(onecount >= 2){
				break;
			}
		}
		if(onecount >= 2){
			count += 1;
		}
	}
	cout << count;
}
