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
// Date: 12/02/22 08:02
// Program: Day so 1
// -------------------  Your code STARTS here !!!---------------------------

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> v(n);
		for(auto &x: v) cin >> x;
		cout << "[";
		for(int i = 0; i < v.size() - 1; i ++)
			cout << v[i] << " ";
		cout << v[v.size() - 1] << "]" << endl;
		while(n > 1){
			for(int i = 0; i < v.size() - 1; i ++)
				v[i] = v[i] + v[i + 1];
			v.pop_back();
			cout << "[";
			for(int i = 0; i < v.size() - 1; i ++)
				cout << v[i] << " ";
			cout << v[v.size() - 1] << "]" << endl;
			n--;
		}
	}
    return 0;
}
