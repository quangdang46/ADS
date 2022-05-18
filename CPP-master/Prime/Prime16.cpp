#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int Sang(int n){
    int dem=0;
    vector <int> v(n+1,0);

    for(int i=2;i<=n;i++){
        if(v[i]==0){
            for(int j=i*2;j<=n;j+=i){
                v[j]=1;
            }
            dem++;
        }
    }
    return dem;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;         
        cout<<Sang(sqrt(n))<<endl;
    }
}
 