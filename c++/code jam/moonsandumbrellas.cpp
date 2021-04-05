#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x,y,sum=0;
	string s;
	cin>>x>>y>>s;
	if(count(s.begin(), s.end(), '?') == s.size() || count(s.begin(), s.end(), '?') == (s.size()-1)){
		sum=0;
	}
	else{
		for(int i=0;i<s.size();i++){
			if(s[i]=='?'){
				if(i !=s.size()-1){
					if(s[i-1] == s[i+1]){
						s[i]=s[i-1];
					}else{
						s[i]='C';
					}	
				}
				else{
					s[i]=s[i-1];
				}
			}
		}
		cout<<s<<endl;
		for(int i=0;i<s.size()-1;i++){
			string str;
			str.push_back(s[i]);
			str.push_back(s[i+1]);
			if(str == "CJ" ){
				cout<<sum<<endl;
				sum +=x;
			}else if(str =="JC"){
				cout<<sum<<endl;
				sum +=y;
			}
	}
}
cout<<sum<<endl;
}

int main(){
	int n;
	cin>>n;
	while(n--){
		solve();
	}
}

