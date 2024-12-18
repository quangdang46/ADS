#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> p;
typedef vector<vector<int> > vt;
typedef vector<pair<int, int> > vp;
const ll mod = 1e9 + 7;
const int oo = 1e6 + 7;

//#define f first
#define s second
#define pb push_back
#define ep emplace_back
#define sz(a) (int) a.size()
#define ms(s, n) memset(s, n, sizeof(s))
#define present(t, x) (t.find(x) != t.end())
#define all(a) (a.begin(), a.end())
#define For(i, l, r) for (int i = l; i <= r; i++)
#define Fod(i, r, l) for (int i = r; i >= l; i--)
#define fillchar(a, x) memset(a, x, sizeof (a))
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

// Author: Nguyen Quoc Dat
// ID: B20DCPT053
// Organization: PTIT
// Date: 16/03/22 00:53
// Program: Chu so sap xep tang dan
// -------------------  Your code STARTS here !!!---------------------------

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<vector<ll> > f(101, vector<ll> (10, 0));
	for(int i = 0; i < 10; ++i)
		f[1][i] = 1;
	for(int i = 2; i <= 100; ++i){
		for(int j = 0; j < 10; ++j){
			for(int k = j; k >= 0; --k){
				f[i][j] += f[i - 1][k];
				f[i][j] %= mod;
			}
		}
	}
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll res = 0;
		for(int i = 0; i < 10; ++i){
			res += f[n][i];
			res %= mod;
		}
		cout << res << endl;
	}
	return 0;
}
