#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int k;
	cin>>k;
	while(k--){

        int n;
        cin>>n;
        int a[n+5];
        for(int i=1;i<=n;i++) a[i]=0;

        for(int i=2;i<=n;i++){
            if(a[i]==0){
                for(int j=i*2;j<=n;j+=i){
                    a[j]=1;
                }
                cout<<i<<" ";
            }
        }
        cout<<'\n';
    }
return 0;
}