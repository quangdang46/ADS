#include<bits/stdc++.h>
using namespace std;
 
int n;
int *a;
void Nhap(){
    cin>>n;
    a= new int [n+1];
    for(int i=0;i<n;i++) cin>>a[i];
}
void Pro(){
    for(int i=0;i<n-1;i++){
        if(a[i]!=0&&a[i]==a[i+1]){
            a[i]*=2;
            a[i+1]=0;
        }
    }
    int dem=0;
    for(int i=0;i<n;i++){
        if(a[i]==0) dem++;
        else cout<<a[i]<<" ";
    }
    for(int i=1;i<=dem;i++) cout<<"0 ";
    cout<<endl;
 
}
 
int main(){
    int test;
    cin>>test;
    while(test--){
        Nhap();
        Pro();
    }
} 