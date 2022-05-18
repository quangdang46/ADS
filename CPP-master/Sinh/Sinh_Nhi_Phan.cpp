#include <bits/stdc++.h>
using namespace std;
 
int n,a[100],stop=0;
void Nhap(){
    cin>>n;
    for(int i=1;i<=n;i++) a[i]=0;
}
void out(){
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<" ";
}
void Sinh(){
    int i=n;
    while(a[i]){
        a[i]=0;
        i--;
    }
    if(i==0) stop=1;
    else a[i]=1;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        Nhap();
        while(!stop){
           out();
           Sinh();
    }
    stop=0;
    cout<<endl;
    }
} 