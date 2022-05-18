#include <bits/stdc++.h>
using namespace std;
int t,n,k;
vector <int> a;
void Nhap(){
	cin>>n>>k;
	a.push_back(0);
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		if(x <= k) a.push_back(1);
		else a.push_back(0);
	}
} 
void Res(){
	int minn=1e9;
	for(int i=1;i<a.size();i++){
		a[i] += a[i-1];
	}
	int end=a[n];	
	for(int i=1;i<=n-end+1;i++){
		int res = a[n] - (a[i+end-1] - a[i-1]);
		if(res<minn) minn = res;
	}
	cout<< minn <<endl;
	a.clear();
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