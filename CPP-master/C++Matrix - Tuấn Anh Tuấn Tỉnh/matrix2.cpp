#include<bits/stdc++.h>
using namespace std;
void reeve(){
	int n;
	cin>>n;
	int a[100][100];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
			
	for(int i=0;i<n;i++)
		sort(a[i],a[i]+n);
	
	int b[n]={},f=0,luu[100],count=0;
	for(b[0]=0;b[0]<n;b[0]++){
		int value=a[0][b[0]];
		bool check=true;
		for(int i=1;i<n;i++){
			while(b[i]<n&&a[i][b[i]]<=value) b[i]++;
			if(a[i][b[i]-1]!=value) check=false; 
        	if(b[i]==n){ 
            	f=1; 
           		break; 
        	} 
		}
		if(check){
			luu[count]=value;
			count++;
		} 
        if(f==1) break; 	
	}
	for(b[0]=0;b[0]<n;b[0]++){
		int value=a[0][b[0]];
		bool check=true;
		for(int i=1;i<n;i++){
			while(b[i]<n&& a[i][b[i]]<=value) b[i]++;
			if(a[i][b[i]-1]!=value) check=false;//-1
			if(b[i]==n){
				f=1;break;
			}
		}
		if(check==true) {
			luu[count]=value;count++;
		}
		if(f==1) break;
	}
	int res=0,kt;
	for(int i=0;i<count;i++){
		kt=0;
		for(int j=i;j>=0;j--){
			if(a[i]==a[j])kt++;
		}
		if(kt==1) res++;
	}
	cout<<res<<endl;
}
int main (){
	int t;
	cin>>t;
	while(t--) reeve();
	return 0;
}
