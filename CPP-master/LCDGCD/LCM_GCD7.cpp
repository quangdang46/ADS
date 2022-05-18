#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    ll x,y,z,n;
    cin>> x >> y >> z >> n;

    ll a=x*y / __gcd(x,y);
    ll b=a*z / __gcd(a,z); // b = gcd(x, y, z)

    ll nn=1;
    for(int i=1;i<n;i++) nn*=10; // nn la so co n chu so nho nhat
    ll m=nn/b;            // vi du:   m = 1000 / 333 = 3;

    if(b>nn*10) cout<<"-1"<<endl;
    else if(m*b==nn) cout<<nn<<endl;
    else if((m+1)*b<nn*10) cout<<(m+1)*b<<endl;
    else cout<<"-1"<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}