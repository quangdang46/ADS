#include <bits/stdc++.h>
using namespace std;
void Res(){

    int n;
    cin>>n;

	int kt=0,dem=0,i=2; 
	while(n>1){
		if(n%i==0){
			n/=i;
			if(n%i==0){
				kt=1;
				break;
			}
			dem++;
		}
		if(dem>3){
			kt=1;break;
		}
		i++;
	}
	if(dem==3) cout<<"1\n";
    else cout<<"0\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
    	Res();
	}
}
 