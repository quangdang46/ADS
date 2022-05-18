#include <bits/stdc++.h>
using namespace std;
// uoc nguyen to thu k
 
int ngtoK(int n,int a[],int k){
	int kt=0,dem=0;
    for(int i=2;i<=n;i++){
    	if(n%i==0&&a[i]==0){
    		while(n%i==0){
    			n/=i;
    			dem++;
    			if(dem==k) return i;
			}
		}
	}
	if(dem<k) return -1;	
}
 
int main(){
	int t;
	cin>>t;
	while(t--){
        int n,k;
        cin>>n>>k;
        int kt=0,dem=0,i=2;

        while(n>1){
            if(n%i==0){
                while(n%i==0){
                    n/=i;
                    dem++;
                    if(dem==k){
                        kt=1;
                        cout<<i<<endl;
                        break;
                    }
                }
            }
            if(kt==1) break;
            i++;
        }

        if(dem<k) cout<<"-1";
        cout<<endl;
	}
 
}