#include <bits/stdc++.h>
using namespace std;
 
int n;
void Nhap(){
    cin>>n;
    long long *a;
    a = new long long[n+1];
    int dem=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]!=0) cout<<a[i]<<" ";
        else dem++;
        }
        for(int i=1;i<=dem;i++) cout<<"0 ";
        cout<<endl;
}
 
int main(){
    int k;
    cin>>k;
    while(k--){
        Nhap();
    }
 
} 