#include <bits/stdc++.h>
using namespace std;
 
string a;
long long b,p;
 
long long ex(long long x,long long y){
	if(y==0) return 1;
	long long s=ex(x,y/2);
	if(y%2==0) return s*s%p;
	else return (s*s%p)*x%p;
} 
 
int main(){
	int k;
	cin>>k;
	while(k--){
	    cin>>a>>b>>p;
	    long long s=0;
	    for(int i=0;i<a.length();i++){
		 s=(s*10+(a[i]-'0'))%p;
	    }
    	    cout<<ex(s,b)%p<<endl; 
    	}
} 
