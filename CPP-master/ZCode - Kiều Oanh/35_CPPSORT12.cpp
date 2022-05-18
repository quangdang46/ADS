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

int a[N], b[N];

void solve(){
    int n, m, j=-1;
	cin >> n >> m;
	for (int i=0; i<n; i++){
        int v; 
        cin >> v;
        a[++j]=v;
    }
    for (int i=0; i<m; i++){
        int v; 
        cin >> v;
        a[++j]=v;
    }
    sort(a, a+n+m);
    for (int i=0; i<m+n; i++) cout << a[i] << " ";
    cout << endl;
}
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

