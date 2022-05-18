#include <bits/stdc++.h>
using namespace std;
int n,a[1000000];
void input(){
    cin >> n;
    for(int i = 0 ; i<n ; i++)
        cin >> a[i];
}
void solve(){
    input();
    sort(a,a+n);
    int dem = 0,d = a[n-1] - a[0];
    vector <int > v;
    for(int i = 1 ; i*i<=d ; i++){
        if(d%i==0){
            v.push_back(i);
            if(i*i != d)
                v.push_back(d/i);
        }
    }
    for(int i = 0 ; i < v.size() ;i++){
        int temp = a[0] % v[i];
        int j;
        for(j = 1 ; j < n ; j++){
            if(a[j] % v[i] != temp)
                break;
        }
        if(j == n ) dem ++;
    }
    cout << dem <<endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
} 