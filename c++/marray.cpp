#include<bits/stdc++.h>
using namespace std;

void recurr(int m,int ele,vector<int>arr,vector<int>res){
	for(int j=0;j<arr.size();j++){
		int sum=m+arr[j];
		if(sum%m==0){
			int els=arr[j];
			res.push_back(arr[j]);
			arr.erase(arr.begin()+j);
			recurr(m, els,arr,res);
		}else{
			break;
		}
	}
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		vector<vector<int> > c;
		vector<int>arr;
		
		int n,m;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			arr.push_back(x);
		}
		int t=0;
		while(t<arr.size()){
			vector<int> res;
			int ele=arr[0];
			res.push_back(ele);
			arr.erase(arr.begin()+t);
			recurr(m,ele,arr,res);
			c.push_back(res);
			t++;
			}
			cout<<c.size()<<endl;
		}
	}
