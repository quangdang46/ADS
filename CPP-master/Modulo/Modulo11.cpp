#include <bits/stdc++.h>
using namespace std;
 
long long a,b,c;
void Nhap(){
    cin>>a>>b>>c;
}

// giong modulo 1, chia b cho 10 den khi b = 0

long long mod(long long a,long long b){
    if(b==0) return 0;
    long long s=mod(a,b/10);
    if(b%10==0) return 10*s%c;
    else return ((10*s%c)+(b%10)*a%c)%c;
}
int main(){
    int k;
    cin>>k;
    while(k--){
        Nhap();
        cout<<mod(a,b)<<endl;
    }
}
 