#include<bits/stdc++.h>
using namespace std;
#define bruh main
int bruh	(){
	int n;
	cin>>n;
	vector<int> v;
for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
sort(v.begin(),v.end());
cout<<v[n-1]+v[n-2]<<endl;
return 0;
}
