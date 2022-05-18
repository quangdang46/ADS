#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 
ll tonguoc(ll n){
	ll sum=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) sum+=i+(n/i);
	}
	return sum+1;
}
int main(){
	int k;
	cin>>k;
	while(k--){
       ll n;
       cin>>n;

	   if(n%2!=0) cout<<"0"<<endl;

	   else if(n>1e12) cout<<"0"<<endl; // k co so nao lon hon 1e12 la so hoan hao
       else{
        if(n==tonguoc(n)) cout<<"1"<<endl;
        else cout<<"0"<<endl;
       }
	}
}
 