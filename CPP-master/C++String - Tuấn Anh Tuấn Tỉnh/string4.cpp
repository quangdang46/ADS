#include<bits/stdc++.h>
using namespace std;
//Dinh Tuan Tinh
string s;
int kiem_tra(int k){
	int dem=0;
	for(int i=0;i<s.length();i++){
		int n=0;
		for(int j=i;j<s.length();j++){
			n=n*10+s[j]-'0';
			n=n%k;
			if(n==0) dem=dem+1;
		}
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		cout<<kiem_tra(8)-kiem_tra(24)<<endl;
	}
	return 0;
}
