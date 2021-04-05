#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int compare(const void* a, const void* b)
{
	if(*(long long *)a < *(long long *)b)
		return -1;
	else if(*(long long *)a == *(long long *)b)
		return 0;
	return 1;

	return 0;
}
int main(){
	ll ans=0,n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++){

		cin>>arr[i];

	}
	
	qsort(arr,n,sizeof(ll),compare);
	for(int i=0;i<n;i++)
		{
			if((arr[i] * (n-i)) > ans)
				ans = arr[i] * (n-i);
		}
	cout << ans << endl;	
}
