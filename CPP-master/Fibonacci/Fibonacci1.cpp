#include<bits/stdc++.h>
using namespace std;
int n,a[1000];
const int p = 1e9+7;
void Nhap(){
    cin>>n;
}
void Res(){
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=n;i++){
        a[i]=a[i-1]+a[i-2];
        if(a[i]>p) a[i]=a[i]%p;
    }
    cout<<a[n]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Nhap();
        Res();
    }
} 