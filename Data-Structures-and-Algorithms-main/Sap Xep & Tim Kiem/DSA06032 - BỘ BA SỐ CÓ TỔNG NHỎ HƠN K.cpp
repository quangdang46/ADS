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

#define f first
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
// Date: 10/02/22 12:19
// Program: Bo ba so co tong nho hon K
// -------------------  Your code STARTS here !!!---------------------------

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t; cin >> t;
	while(t--){
		int n; ll k; cin >> n >> k;
		vector<ll> a(n);
		for(auto &x: a) cin >> x;
		ll cnt = 0;
		sort(a.begin(), a.end());
		for(int i = 0; i < n - 1; i ++){
			for(int j = i + 1; j < n; j ++){
				auto x = lower_bound(a.begin() + j + 1, a.end(), k - a[i] - a[j]) - a.begin();
				int t = x - 1 - j;
				if(t >= 1) cnt += t;
			}
		}
		cout << cnt << endl;

	}
	return 0;
}
