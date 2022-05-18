#include<bits/stdc++.h>

using namespace std;
void slove(int r, int c, int a[][105]){
	int d=1;
	int b[105][105];
	int hang=r,cot=c,gt=d;
	int tmp;
	while(d<=r/2){
		for(int j=d;j<cot;j++) b[gt][j+1]=a[gt][j];
		gt=cot;
		for(int i=d;i<hang;i++) b[i+1][gt]=a[i][gt];
		gt=hang;
		for(int j=cot;j>d;j--) b[gt][j-1]=a[gt][j];
		gt=d;
		for(int i=hang;i>d;i--) b[i-1][gt]=a[i][gt];
		d++;hang--;cot--;gt++;
	}
	if(r%2==1){
		for(int j=d;j<cot;j++) b[d][j+1]=a[d][j];
		b[d][d]=a[d][cot];
	}
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cout<<b[i][j]<<" ";
		}
	}
	cout<<endl;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int r,c;
		cin>>r>>c;
		int a[105][105];
		for(int i=1;i<=r;i++){
			for(int j=1;j<=c;j++){
				cin>>a[i][j];
			}
		}
		slove(r,c,a);
	}
	
	return 0;
}


