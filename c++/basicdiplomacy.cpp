#include<bits/stdc++.h>
using namespace std;

int main(){
	int e;
	cin>>e;
	for(int i=0;i<e;i++){
		int n,m;
		cin>>n>>m;
		vector<vector<int> > arr;
		for(int j=0;j<m;j++){
			vector<int> inner;
			int x;
			string s;
			cin.ignore();
			getline(cin,s);
			
			stringstream ss(s);
			while(ss>>x){
				inner.push_back(x);
			}
			arr.push_back(inner);
			cin.ignore();
			s.clear();
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<arr[i].size();j++){
				cout<<arr[i][j]<<endl;
			}
		}
		
		
	}
	return 0;
}
