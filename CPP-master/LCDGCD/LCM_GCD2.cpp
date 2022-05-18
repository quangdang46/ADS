#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;

void Res(){
    int n;
    cin>>n;
    int a[n+5] = {0};
    ll ans = 1;
    for(int i = 2; i<=n; i++){
        if(a[i]==0){
            for(int j=i*2; j<=n; j+=i) a[j] = 1;
            
            // kiem tra

            int tmp = i;
            while(tmp <= n){
                tmp *= i;
            }
            ans *= tmp/i;
        }
    }
    cout<< ans << '\n';
}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}