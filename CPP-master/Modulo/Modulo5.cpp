#include <bits/stdc++.h>
using namespace std;
 
string s;
long long m;
void Input(){
    cin>>s>>m;
}
void Result(){
    int n=s.length();
    long long t=s[0]-'0';
    for(int i=0;i<n-1;i++){
        t=t%m;
        t=t*10+(s[i+1]-'0');
    }
    cout<<t%m<<endl;
}
 
 
int main(){
    int k;
    cin>>k;
    while(k--){
        Input();
        Result();
    }
 
}