#include <bits/stdc++.h>
using namespace std;
 
void Res(){
    int n,p;
    cin>>n>>p;

    int k = 1;
    int ans = 0;
    while(k<=n){
        k *= p;
        ans += n/k;
    }
    cout<<ans<<endl;
}
int main(){
    int x;
    cin>>x;
    while(x--){
        Res();
    }
} 