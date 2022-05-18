#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int a[N], b[N], diff[2*N+1];

void solve(){
    int n, maxLen = 0, ps1 = 0, ps2 = 0;
	cin >> n;
	for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) cin >> b[i];
    memset(diff, -1, sizeof(diff));
    for (int i=0; i<n; i++){
        ps1 += a[i];
        ps2 += b[i];
        int currDiff = ps1-ps2;
        int diffIndex = n + currDiff;
        if (currDiff == 0) maxLen = i+1;
        else if (diff[diffIndex] == -1) diff[diffIndex] = i;
        else {
            int len = i -diff[diffIndex];
            if (len > maxLen) maxLen = len;
        }
    }
    cout << maxLen << endl;
}
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

