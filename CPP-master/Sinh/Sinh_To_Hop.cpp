#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],stop=0;
void Nhap(){
    cin>>n>>k;
    for(int i=1;i<=k;i++) a[i]=i;
}
void HienTHi(){
    for(int i=1;i<=k;i++) cout<<a[i];
    cout<<" ";
}
void Sinh(){
    int i=k;
    while(a[i]==n-k+i && i>0) i--;
    if(i==0) stop = 1;
    else {
        a[i]++;
        for(int j=i+1;j<=k;j++) a[j]=a[i]+j-i;
    }
}
int main(){
	int t;
	cin>>t;
	while(t--){
    Nhap();
    while(!stop){
        HienTHi();
        Sinh();
    }
    stop=0;
    cout<<endl;
	}
} 