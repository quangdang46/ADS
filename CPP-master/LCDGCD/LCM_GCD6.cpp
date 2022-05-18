#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;

void Res(){
    ll n,m;
    cin>>n>>m;
    ll x = ( n*(n+1)/2 + m ) / 2;   // n*(n+1)/2   : tong 1->n
    ll y = x - m;

    if( __gcd(x,y)==1 && x+y==n*(n+1)/2){ 
        cout<<"Yes\n";
    }
    else cout<<"No\n";
}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}