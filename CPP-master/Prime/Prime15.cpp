#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    int a[n+5];
    memset(a,0,sizeof(a));
    a[1] = 1;
    cout<<1<<" ";

    // tuong tu sang nguyen to: 

    for(int i=2;i<=n;i++){
        if(a[i] == 0){
            a[i] = i;
            for(int j=i*2;j<=n;j+=i){
                if(a[j] == 0) a[j] = i;
            }
        }

        cout<<a[i]<<' ';

    }
    cout<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}