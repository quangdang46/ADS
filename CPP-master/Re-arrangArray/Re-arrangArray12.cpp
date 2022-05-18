#include <bits/stdc++.h>
using namespace std;
int n;
int *a;
long long *b;
long long maxx; 
void Nhap(){
	cin>>n;
	a = new int [n+1];
	b = new long long [n+1];
	for(int i = 1;i< = n;i++) {
		cin>>a[i];
	}
} 
long long Try(int x,int a[] ){
	b[x] = a[x];
	long long maxx = b[x];
	for(int i = x+1;i< = n;i++){
		b[i] = b[i-1]*a[i];
		maxx = max(maxx,b[i]);
	}
	return maxx;
}
void Res(){
	long long maxx  =  Try(1,a);
	for(int i = 1;i<=n;i++){
		for(int j = i+1;j <= n;j++){
			maxx = max(maxx,Try(j,a));
		}
	}
	cout<<maxx<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        Nhap();
        Res();
    }

}