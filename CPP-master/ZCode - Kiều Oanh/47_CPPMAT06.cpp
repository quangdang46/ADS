#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 101
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int a[N][N], r[N];

void solve(){
    int n;
	cin >> n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++) cin >> a[i][j];
    }
     for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i==n-1 || j==n-1|| i==0 || j==0) cout << a[i][j] << " ";
            else cout <<"  ";
        }
        cout << endl;
    }
}
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

