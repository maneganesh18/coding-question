#include<bits/stdc++.h>
using namespace std;

int main(){
	int upper=0,lower=0;
	string ch;
	cin>>ch;

	for(int i=0;i<ch.size();i++ ){
		if(isupper(ch[i]))
		upper++;
		else if(islower(ch[i])){
			lower++;
		}
	}
	if(upper>lower){
		for(int i=0;i<ch.size();i++){
			int c = ch[i]; 
        	if (islower(c)) {
            	ch[i] = toupper(c); 
    		}
		}
	}else if(upper <=lower){
		for(int i=0;i<ch.size();i++){
			int c = ch[i]; 
        	if (isupper(c)) {
            	ch[i] = tolower(c); 
    		}
		}
	}
	cout<<ch;
}



//ch[i]>=65&&ch[i]<=90
//ch[i]>=97&&ch[i]<=122
