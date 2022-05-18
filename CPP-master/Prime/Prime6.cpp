#include <bits/stdc++.h>
using namespace std;
int ngto(int n){
	if(n<2) return 0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
} 
int main(){
    int k;
    cin>>k;
    while(k--){
    	int n;
    	cin>>n;
    	int a[n/2+5]={0};
		int i,kt=0;
		for(i=2;i<=n/2;i++){
			if(a[i]==0){
				for(int j=i*i;j<=n/2;j+=i){
					a[j]=1;
				}
				if(ngto(n-i)){ 
				kt=1;
				cout<<i<<" "<<n-i<<endl;break;
				}
			}
		}
    }
 
return 0;
}