#include<bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int result =0;
		string x;
		cin>>x;
		if(x.size()%2 ==0){
			int mid = x.size()/2;
			string s1,s2;
			s1 =x.substr(0,mid);
			s2=x.substr(mid,x.size());
			sort(s1.begin(),s1.end());
			sort(s2.begin(),s2.end());
			if(s1.compare(s2) ==0){
				result=1;
			}else{
				result=0;
			}
			
		}else{
			float mid=x.size()/2;
			string s1,s2;
			s1 =x.substr(0,mid);
			s2=x.substr(mid+1,x.size());
			sort(s1.begin(),s1.end());
			sort(s2.begin(),s2.end());
			if(s1.compare(s2) ==0){
				result=1;
			}else{
				result=0;
			}
		}
		if(result==1){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}

