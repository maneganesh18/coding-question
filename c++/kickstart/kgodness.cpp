#include<bits/stdc++.h>
using namespace std;

int kgodness(string s, int k){
  int minOperations = 0, x = 0;
  for(int i = 0; i < s.size() / 2; i++) {
     if(s[i] != s[s.size() - i - 1]) {
         x++;
     }
  }

  if(x == k) {
      minOperations = 0;
  }
  else if(x > k) {
      minOperations = x - k;
  }
  else {
      minOperations = k - x;
  }
  return minOperations;
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int l,k,count=0,res;
		cin>>l>>k;
		string s;
		cin>>s;
		res =kgodness(s,k);	
		cout<<"Case #"<<i+1<<":"<<" "<<res<<endl;
	}
}



//	int h=l;
//		for(int j=l/2;j>=0;j--){
//			char g=s[j];
//			if(g!=s[h-1]){
//				count++;
//				if(count ==k){
//				cout<<"Case #"<<i+1<<":"<<" "<<res<<endl;
//				break;
//				}
//				h--;
//			}else{
//				int e=h-1;
//				while(true){
//					if(g != s[e-1]){
//						s[e]=s[e-1];
//						count++;
//						res++;
//						if(count == k){
//						cout<<"Case #"<<i+1<<":"<<" "<<res<<endl;
//						break;	
//						}
//						
//					}
//					break;
//				}
//			}
//		}
