#include<bits/stdc++.h>
using namespace std;
int n;
struct xau{
    string s;
};
bool compare(xau s1,xau s2){
    return s1.s+s2.s > s2.s+s1.s;
}
int main(){
    int x;
    cin>>x;
    while(x--){
        cin>>n;
        struct  xau a[n+1];
        for(int i=0;i<n;i++) cin>>a[i].s;
        sort(a,a+n,compare);
        for(int i=0;i<n;i++) cout<<a[i].s;
        cout<<endl;
    }
}