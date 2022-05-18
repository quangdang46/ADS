#include<bits/stdc++.h>
using namespace std;
 
string a,b;
int n,m;
vector <int> v;
void Nhap(){
    cin>>a>>b;
    n=a.length();
    m=b.length();
}
void insert(string a,string b){
    int x=fabs(n-m);
    for(int i=1;i<=x;i++) v.push_back(0);
    for(int i=0;i<b.length();i++) v.push_back(b[i]-'0');
}
int res(string a,string b,int nn){
    int c[1000];
    int nho=0;
    for(int i=nn-1;i>=0;i--){
        c[i]=a[i]-'0'+v[i]+nho;
        if(c[i]>=10)
        {
            c[i]%=10;
            nho=1;
        }
        else nho = 0;
    }
    if(nho>0) cout<<nho;
    for(int i=0;i<nn;i++) cout<<c[i];
    cout<<endl;
    v.erase(v.begin(),v.end());
}
 
int main(){
    int test;
    cin>>test;
    while(test--){
        Nhap();
        if(n>m) {
            insert(a,b);
            res(a,b,n);
        }
        else {insert(b,a);
        res(b,a,m);}
    }
} 