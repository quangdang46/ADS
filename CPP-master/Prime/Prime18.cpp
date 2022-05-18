#include <bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    while(k--){
    	int m,n,a,b;
    	cin>>m>>n>>a>>b;

		int x = a*b / __gcd(a,b);  // LCM

    	int dem = n/a + n/b - n/x - m/a -m/b + m/x;

		if(m%a==0) dem++;
		if(m%b==0) dem++;
		if(m%x==0) dem--;
		cout<<dem<<endl;
	}
return 0;
}
