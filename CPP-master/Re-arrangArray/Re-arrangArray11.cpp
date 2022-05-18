#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,*a; 
void Nhap(){
	cin>>n;
	a=new int [n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
}
void Res(){
	int r[n+1],l[n+1];          // dãy con tăng dần dài nhất theo 2 chiều 
	l[0]=0;r[n+1]=0;
	for(int i=1;i<=n;i++){
		l[i]=0;
		for(int j=0;j<i;j++) if(a[i]>a[j]) l[i]=max(l[i],l[j]);
		l[i]++;
//		cout<<l[i]<<" ";
	}
//	cout<<endl;
	for(int i=n;i>=1;i--){
		r[i]=0;
		for(int j=n;j>i;j--) if(a[i]>a[j]) r[i]=max(r[i],r[j]);
		r[i]++;
//		cout<<r[i]<<" ";
	}
	int maxx=l[1]+r[1];
	for(int i=1;i<=n;i++) maxx=max(maxx,l[i]+r[i]);
	cout<<maxx-1<<endl;;
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