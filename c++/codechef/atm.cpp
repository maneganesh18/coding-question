#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	double wi,ab;
	cin>> wi >> ab;	
	if(remainder(wi,5) == 0){
		if(wi < ab){
			cout << fixed<< setprecision(2) << ab-wi-0.50;
		}else{
			cout<< fixed<< setprecision(2)<<ab;
		}
	}else{
		cout<< fixed<< setprecision(2)<< ab;
	}
} 
