#include <bits/stdc++.h>
using namespace std;

long long a[100];
long long n;
 
int main(){
    int x;
    cin>>x;
    while(x--){
        cin>>n;

        if(n==1||n==0) cout<<"YES"<<endl;

        else {
            a[0]=0;
            a[1]=1;
            int flag=0;
            for(int i=2;i<=92;i++){    // a[93] > long long
                a[i]=a[i-1]+a[i-2];
                if(a[i]==n){
                    flag=1;
                    break;
                }
            }
        // cout<<a[92]<<" ";
            if(flag==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
}
return 0;
} 