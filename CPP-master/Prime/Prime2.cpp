#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int k;
	cin>>k;
	while(k--){
		long long n;
		cin>>n;

		int res = -1;

		for(int i=2;i<=sqrt(n);i++){
			while(n%i == 0){
				n/=i;
                if(n>1) res=n;
			}
		}
		
        if(res>0) cout<<res<<endl;
		else cout<<n<<endl;
	}
    
    return 0;
}
 