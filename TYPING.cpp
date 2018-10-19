#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long t;
	cin >>t;
	while(t--){
		long n;
		cin>>n;
		
		string a[n];
		long i,j;
		float t=0;
		for(i=0;i<n;i++){
			
			cin>>a[i];
	t=t+0.2;
		int l =	a[i].length();
		char c[l+1];
		strcpy(c,a[i].c_str());
		for ( j=0 ; j<l-1;j++){
		
		if(((c[j]=='d'|| c[j]=='f' )&&(c[j+1]=='j'||c[j+1]=='k'))||((c[j]=='j'|| c[j]=='k' )&&(c[j+1]=='d'||c[j+1]=='f')))
		{
			t = t+0.2;
		}
		else if (((c[j]=='d'||c[j]=='f')&&(c[j+1]=='d'||c[j+1]=='f'))||((c[j]=='j'||c[j]=='k')&&(c[j+1]=='j'||c[j+1]=='k'))){
			t = t + 0.4;
		}
		
		}}
cout<<t<<endl;
	}
}
