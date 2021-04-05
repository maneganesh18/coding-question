#include<bits/stdc++.h>
using namespace std;


void solve(){
	int x,sum=0;
	cin>>x;
	vector<int> arr;
	for(int i=0;i<x;i++){
		int z;
		cin>>z;
		arr.push_back(z);
	}
	
		
	for(int i=0;i<x;i++){
		int minval=arr[i],minvalindex=i;
		for(int j=i+1;j<x;j++){
			if(arr[j]<minval){
				for(int k=j+1;k<x;k++){
					if(minval>arr[k]){
						j=k;
						minval=arr[k];
						break;
					}
				}
				minvalindex =j;
			}
				
			}
			if(i<minvalindex){
				int temp;
				temp=arr[i];
				arr[i]=arr[minvalindex];
				arr[minvalindex]=temp;
				cout<<sum<<endl;
				
				sum +=(minvalindex -i +1);
				
			
			}
			
		
}
	cout<<sum+1<<endl;
}

int main(){
	int n;
	cin>>n;
	while(n--){
		solve();
	}
}


//	if(arr[i]>arr[j]){
//				for(int k=j+1;k<x;k++){
//					if(arr[j]>arr[k]){
//						j=k;
//						break;
//					}
//				}
//				minval=j;
//			}
//			
//		}
//		cout<<arr[i]<<"  "<<arr[minval]<<endl;
