#include <bits/stdc++.h>
using namespace std;
 
int x,y,p;
 
long long  ex(int x,int y){
    if(y==0) return 1;
    long long s=ex(x,y/2);
    if(y%2==0) return s*s%p;
    else return (s*s%p)*x%p;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>x>>y>>p;
        cout<<ex(x,y)<<endl;
    }
} 