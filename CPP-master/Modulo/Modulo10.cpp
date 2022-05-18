#include<bits/stdc++.h>
using namespace std;
int n,x,*a;
const int p=1e9+7;
void Nhap(){
    cin>>n>>x;
    a = new int [n+5];
    for(int i=1;i<=n;i++) cin>>a[i];
}
long long ex(int n,int k){
    if(k==0) return 1;
    long long s=ex(n,k/2);
    if(k%2==0) return s*s%p;
    else return (s*s%p)*n%p;
}
void Res(){
    long long s=0;
    for(int i=1;i<=n;i++){
        s+=(a[i]*ex(x,n-i));
    }
    cout<<s%p<<endl;
}
int main(){
    int test;
    cin>>test;
    while(test--)
    {
        Nhap();
        Res();
    }
} 