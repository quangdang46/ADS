/*
https://www.spoj.com/PTIT/problems/PTIT135G/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int n,m;
	cin>>n>>m;
	int a[n+5];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int res=0;
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				if(a[i]+a[j]+a[k]<=m && a[i]+a[j]+a[k]>res)
					res=a[i]+a[j]+a[k];
			}
		}
	}
	cout<<res;
}

// code by Trung 15cm

