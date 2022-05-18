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

bool compare(int a, int b){
    return (a>b);
}

void solve(){
    int n, k;
	cin >> n >> k;
	for (int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n, compare);
    for (int i=0; i<k; i++) cout << a[i] << " ";
    cout << endl;
}
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

