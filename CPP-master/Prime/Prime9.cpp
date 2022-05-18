#include <bits/stdc++.h>
using namespace std;

void Res(){
    int n;
	cin>>n;
	int i=2;
	while(n>1){
		int exp = 0;
		while(n%i==0){
			n /= i;
			exp++;
		}
		if(exp>0) cout<<i<<" "<<exp<<" ";
		i++;
	}
	cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    	Res();
	}
}