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

int a[N], r[N];

void solve(){
    int n, c=-1;
	cin >> n;
    memset(r, 0, sizeof(r));
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++){
        r[a[i]]++;
        if (r[a[i]]==2){ 
            c=a[i];
            break;
        }
    }
    cout << c << endl;
}
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

