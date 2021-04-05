#include <bits/stdc++.h> 
using namespace std;

int main(){
    int x;
    cin>>x;
    vector<int> res;
    for(int i=0;i<x;i++){
        int n,b,count=0,sum=0;
        cin>>n>>b;
        vector<int> arr;
        for(int j=0;j<n;j++){
            int z;
            cin>>z;
            arr.push_back(z);
        }
        sort(arr.begin(),arr.end());
        for(int k=0;k<n;k++){
            sum += arr[k];
            if(sum <= b){
                count++;
            }else{
            	res.push_back(count);
                break;
            }
            
        }
        cout<<"Case #"<<i+1<<":"<<" "<<count<<endl;
        }
    return 0;
    }
    

