#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;

int n;
int a[100];
int mod = 1e9 + 7;

int hx(){
    ll mul = 1;
    for(int i=1;i<=n;i++){
        mul *= a[i];
        mul %= mod;
    }
    return mul;
}

int gx(){
    int tmp = a[1];
    for(int i=2;i<=n;i++)  tmp = __gcd(tmp,a[i]);
    return tmp;
}

int hx_exp_gx(int n, int k){    //   n^k
    if(k == 0) return 1;
    ll s = hx_exp_gx(n,k/2);
    if(k%2 == 0) return s * s % mod;
    
    return (s*s % mod) * n % mod;
}  

void Res(){
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    int h = hx();
    int g = gx();
    cout<< hx_exp_gx(h,g) <<'\n';   

}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}