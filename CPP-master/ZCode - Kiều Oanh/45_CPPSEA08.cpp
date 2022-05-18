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

int a[N], result[N];

void solve(){
    int n, k, c=0;
	cin >> n >> k;
	for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++){
        if (a[i]==k) c++;
    }
    if (c!=0) cout << c;
    else cout << -1;
    cout << endl;
}
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}