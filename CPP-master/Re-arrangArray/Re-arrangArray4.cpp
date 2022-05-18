#include <bits/stdc++.h>
using namespace std;
int n,*a;
void Nhap(){
	cin>>n;
	a = new int [n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
}
void Res(){
	sort(a+1,a+n+1);
	if(n%2==0){
		for(int i=1;i<=n/2;i++){
			cout<<a[i]<<" "<<a[i+n/2]<<" ";
		}
	}
	else{
		for(int i=1;i<=n/2;i++){
			cout<<a[i]<<" "<<a[i+n/2+1]<<" ";
		}
		cout<<a[n/2+1];
	}
	cout<<endl;
}
int main(){
    int test;
    cin>>test;
    while(test--){
    	Nhap();
    	Res();
	}
 
return 0;
}