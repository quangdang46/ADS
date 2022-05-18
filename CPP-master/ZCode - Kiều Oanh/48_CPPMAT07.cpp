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
        if (i % 2 == 0){
            for (int j=0; j<n; j++) cout << a[i][j] << " ";
        }
        else{
            for (int j=n-1; j>=0; j--) cout << a[i][j] << " ";
        }
    }
    cout << endl;
}
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

