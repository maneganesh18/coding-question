#include<bits/stdc++.h>
using namespace std;

int main(){
	string n;
	cin>>n;
	vector<int> arr;
	stringstream ss(n);

	while(true){
		int x,ch;
		if(ss>>x){
			arr.push_back(x);

		}else{
			break;
		}
	}
	sort(arr.begin(),arr.end());
	for(int i=0;i<arr.size();i++){
		if(i == arr.size()-1){
			cout<<arr[i];
		}else{
			cout<<arr[i]<<"+";
		}
	}
	return 0;
}
