#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int k;
    cin>>k;
    while(k--){
        int a,m,kt=0;
        cin>>a>>m;
        for(int i=0;i<=m-1;i++){
            if(a*i%m==1){
                kt=1;
                cout<<i<<endl;break;
            }
        }
        if(kt==0) cout<<"-1"<<endl;
    }
 
return 0;
}
 