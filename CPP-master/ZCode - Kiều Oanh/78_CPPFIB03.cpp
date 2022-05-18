#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 9000000000000000007
#define N 10005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int f[N];
void fibo(){
    memset(f, 0, sizeof(f));
    int a=-1,  b=1, c=0;
    while (c<N){
        c=a+b;
        f[c]=1;
        a=b;
        b=c;
    }
}
void solve(){
    int n;
    cin >> n; 
    for (int i=0; i<n; i++){
        int v; 
        cin >> v;
        if (f[v]) cout << v << " ";
    }
    cout << endl;
}
 
int main(){
	faster();
    fibo();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
 