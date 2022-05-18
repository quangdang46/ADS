#include<bits/stdc++.h>

using namespace std;
//Dinh Tuan Tinh
long long Luy_Thua(long long a,long long n){
	if(n==0) return 1;
	long long m=Luy_Thua(a,n/2);
	m*=m;
	m%=10;
	if(n%2==0) return m;
	return (m*a)%10;
}
int main(){
	long long t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long dem=0;
		long long sum=0;
		for(long long i=s.size()-1;i>=0;i--){
			long long m=(s[i]-'0')*Luy_Thua(2,dem);
			sum=sum+m%10;
			while(sum>=10){
				sum%=10;
			}
			dem++;
		}
		if(sum==0||sum==5){
			cout<<"Yes";
		}
		else{
			cout<<"No";
		}
		cout<<endl;
	}
	return 0;
}


