#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int oo=105;
int A[oo][oo];
int main(){
	cin.tie(0);ios_base::sync_with_stdio(false);
	int t;cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>A[i][j];
			}
		}
		int d=0, row=n, col=m;
		int count=0;//chi cho in ra dung n*m lan
		while(d<=n/2&&d<=m/2){
			for(int i=d;i<col&&count++<n*m;i++){
				cout<<A[d][i]<<" ";
			}
			for(int i=d+1;i<row&&count++<n*m;i++){
				cout<<A[i][col-1]<<" ";
			}
			for(int i=col-2;i>=d&&count++<n*m;i--){
				cout<<A[row-1][i]<<" ";
			}
			for(int i=row-2;i>d&&count++<n*m;i--){
				cout<<A[i][d]<<" ";
			}
			d++;row--;col--;
		}
		cout<<endl;
	}
	return 0;
}
