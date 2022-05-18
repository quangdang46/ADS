#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
 
//https://hayashikita.wordpress.com/2012/04/02/tinh-toan-t%E1%BB%95-h%E1%BB%A3p/
const int p = 1e9+7;
ll ckn(int n,int k){
    if(k==0 or k==n) return 1;
    ll c[1009][1009]; // quy táº¯c tam giÃ¡c pascal
    c[0][0]=1;
    for(int i=1;i<=n;i++){
        c[i][0]=1;
        c[i][i]=1;
        for(int j=1;j<i;j++){
            c[i][j] = (c[i-1][j-1]+c[i-1][j]) %p;
        }
    }
    return c[n][k]%p;
}
 
void Res(){
    int n,k;
    cin>>n>>k;
    cout<<ckn(n,k)<<endl;
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
} 