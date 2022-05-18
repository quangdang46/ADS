#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int prime(int n){
    if (n<2) return 0;
    for (int i=2; i<=sqrt(n); i++){
        if (n%i==0) return 0;
    }
    return 1;
}

int gcd(int a, int b){
    int t;
    while(b != 0){
        t=a%b;
        a=b;
        b=t;
    }
    return a;
}

void solve(){
   int x, c=0;
   cin >> x;
   for (int i=1; i<x; i++){
       if (gcd(i, x)==1) c++;
   }
   cout << prime(c) << endl;
}

int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}