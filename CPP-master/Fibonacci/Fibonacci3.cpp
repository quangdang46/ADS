#include<bits/stdc++.h>
using namespace std;
int n;
int a[100],b[100];   // a[] is array of Fibonacci,  b[] is array of input
void Nhap(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>b[i];
}
int isFibo(int x){             // check b[i] is a Fibonacci number or not ?
    if(x==1||x==0) return 1;
	else {
        a[0]=0;
        a[1]=1;
        int flag=0;
        for(int i=2;i<=20;i++){
            a[i]=a[i-1]+a[i-2];
            if(a[i]==x){
                flag=1;
                break;
            }
        }
    if(flag==1) return 1;
    else return 0;
    }
}
void Res(){
    for(int i=1;i<=n;i++){
        if(isFibo(b[i])){
            cout<<b[i]<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Nhap();
        Res();
    }
}