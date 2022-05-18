#include <bits/stdc++.h>
using namespace std;

priority_queue <long long> p;
int n;
long long a[10000005],b[10000005];

void Nhap(){
    cin>>n;
    for(int i=0;i<n;i++) b[i] = -1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=0 && a[i]<n) b[a[i]] = a[i];
    }
}

void Res(){
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}
 
 
 
int main(){
    int test;
    cin>>test;
    while(test--){
        Nhap();
        Res();
    }
} 