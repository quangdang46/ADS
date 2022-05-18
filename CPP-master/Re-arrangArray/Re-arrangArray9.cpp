#include<bits/stdc++.h>
using namespace std;
 
int n;
int *a;
int *b;
void Nhap(){
    cin>>n;
    a= new int [n+1];
    b= new int [n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
}
void Res(){
    b[1] = a[2] * a[1];
    b[n] = a[n-1] * a[n];
    cout<<b[1]<<" ";
    for(int i=2;i<=n-1;i++){
        b[i] = a[i-1] * a[i+1];
        cout<<b[i]<<" ";
    }
    cout<<b[n]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Nhap();
        Res();
    }
} 