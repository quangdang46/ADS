#include<bits/stdc++.h>
using namespace std;
long long n;
 
int solve(){

    cin>>n;

	for(int i=2;i<=sqrt(n);i++)
		while(n%i==0){
			cout << i << " ";
			n /= i;
		}
	if(n==1) cout << endl;
	else cout << n << endl;
}
 
int main (){
	int k;
	cin >> k;
	while (k--){
		solve();
	}
}