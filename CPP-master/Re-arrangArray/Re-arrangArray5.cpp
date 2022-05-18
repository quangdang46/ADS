#include <bits/stdc++.h>
using namespace std;
 
int n,*a;
void Nhap(){
    cin>>n;
    a = new int [n+1];
    for(int i=0;i<=n-1;i++) cin>>a[i];
}
void Pro(){
        sort(a,a+n);
        for(int i=0;i<n/2;i++){
            cout<<a[n-i-1]<< " " << a[i]<<" ";
        }
        if(n%2!=0) cout<<a[n/2];
        cout<<endl;
}
 
int main(){ 
    int x;
    cin>>x;
    while(x--){
        Nhap();
        Pro();
    }
 
} 