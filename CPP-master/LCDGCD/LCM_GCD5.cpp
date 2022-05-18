#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;

void Res(){
    ll x,y,a;;
    cin>>a>>x>>y;

    int tmp = __gcd(x,y);
    for(int i=1;i<=tmp;i++){
        cout<< a;
    }
    cout<< '\n';

}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}