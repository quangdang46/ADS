#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;

void Res(){
    ll a;
    string b;
    cin>> a >> b;    

    ll s = 0;

    for(int i=0; i<b.length(); i++){
        s = (s*10 + b[i] - '0') % a;
    }

    cout<< __gcd(a,s) << '\n';

}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}