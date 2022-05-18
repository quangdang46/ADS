#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int k; 
    cin>>k;
    while(k--){
    	int m,n;
    	cin>>m>>n;
    	int a[n+10];
    	for(int i=2;i<=n;i++) a[i]=0;

    	for(int i=2;i<=n;i++){  // sang nguyen to
    		if(a[i]==0){
    			for(int j=i*2;j<=n;j+=i){
    				a[j]=1;
				}
				if(i>=m) cout<<i<<" ";
			}
		}
		cout<<endl;
	}
 
return 0;
}