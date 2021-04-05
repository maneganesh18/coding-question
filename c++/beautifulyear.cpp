#include<bits/stdc++.h>
using namespace std;

int main(){
	int year;
	int a,b,c,d;
	cin>>year;
	while(true){
		year++;
		a=year%10;
		b=(year/10)%10;
		c=(year/100)%10;
		d=(year/1000)%10;
		if(a != b && a!=c && a != d){
			if(b!=c&& b!=d){
				if(c!=d){
					cout<<year;
					break;
				}
			}
		}
	}
}
