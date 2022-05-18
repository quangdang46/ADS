#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int Sang(int n, int l){
    int dem=0;
    vector <int> v(n+1,0);

    for(int i=2;i<=n;i++){
        if(v[i]==0){
            for(int j=i*2;j<=n;j+=i){
                v[j]=1;
            }
            if(i>=l) dem++;
        }
    }
    return dem;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, l; 
        cin>>l>>n;         
        cout<<Sang(sqrt(n), l)<<endl;
    }
}
 