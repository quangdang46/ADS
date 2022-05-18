#include <bits/stdc++.h>
using namespace std;

int ngto(int n){
	for(int i=2;i<=sqrt(n);i++){
	   if(n%i==0) return 0;
    }
	return 1;
}

int tongchuso(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int tonguoc(int n){
	int sum=0;
	int i=2;
	while(n>1){
		while(n%i==0){
			sum+=tongchuso(i);
			n/=i;
		}
		i++;
	}
	if(n>1) sum+=tongchuso(n);
	return sum;
}

void Res(){
    int n;
	cin>>n;
	if(ngto(n)) cout<<"NO"<<endl;
	else {
		if(tongchuso(n)==tonguoc(n)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
int main(){
    int t;
    cin>>t;
    while(t--){
    	Res();
	}
}