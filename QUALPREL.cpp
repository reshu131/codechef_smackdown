#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long t,q;
	cin >> t;
	while(t--){
		
		long n,k,i,z,r=0;
		cin>>n>>k;
		long a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n,greater<int>());
		z = a[k-1];
		for(i=0;i<n;i++){
			if(a[i]>=z)
			r++;
		}
	cout << r <<endl;	
	}
}
