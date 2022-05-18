#include<bits/stdc++.h>

using namespace std;
int A[20][20];
int maxRectangle(int l,int r,int m){
	int res = 0;
	for(int i=1;i<=m;i++){
		bool isFull_1=false;
		for(int j=l;j<=r;j++){
			if(!A[j][i]){
				isFull_1=true;
				break;
			}
		}
		if(!isFull_1) res++;
	}
	return res;
}
int main(){
	//faster();
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>A[i][j];
			}
		}
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				//dien tich hinh chu nhat
				ans=max(ans,maxRectangle(i,j,m)*(j-i+1));
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}


