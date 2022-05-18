#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void sang(int n,int a[]){
	for(int i=2;i<=n;i++) a[i]=0;
	for(int i=2;i<=n;i++){
		if(a[i]==0){
			for(int j=i*i;j<=n;j+=i){
				if(j%i==0) a[j]=1;
			}
		}
	}
} 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
		cin>>n;
		int a[n+2];
		sang( sqrt(n) ,a);
		for(int i=2;i<=t;i++){
		   if(a[i]==0){
		       cout<< (ll) i*i <<" ";
		   }
		}
		cout<<endl;
	}
 
return 0;
}