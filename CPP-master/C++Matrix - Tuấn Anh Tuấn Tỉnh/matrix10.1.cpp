#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int **arr=new int* [n];
		for(int i=0;i<n;i++){
			arr[i]=new int[m];
		}
		vector <bool> row(n,0);
		vector <bool> column(m,0);
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
				if(arr[i][j]==1){
					row[i]=1;
					column[j]=1;
				}
			}
		}
		for(int i=0;i<n;i++){
			bool ok=false;
			if(row[i]==1){
				ok=true;
			}
			for(int j=0;j<m;j++){
				if(ok==true||column[j]==1) cout<< 1 <<" ";
				else cout<< 0 <<" ";
			}
			cout<<"\n";
		}
		
	}
	return 0;
}


