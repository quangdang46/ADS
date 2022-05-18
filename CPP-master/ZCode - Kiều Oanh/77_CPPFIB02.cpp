#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 9000000000000000007
#define N 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

vector <ull> v;
void fibo(){
    ull a=1,  b=1, c=0;
    while (c<base){
        c=a+b;
        v.push_back(c);
        a=b;
        b=c;
    }
}
void solve(){
    ll n;
    cin >> n; 
    if (n==0 || n==1) cout << "YES";
    else {
        if (find(v.begin(), v.end(), n) != v.end()) cout <<"YES";
        else cout << "NO";
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
 