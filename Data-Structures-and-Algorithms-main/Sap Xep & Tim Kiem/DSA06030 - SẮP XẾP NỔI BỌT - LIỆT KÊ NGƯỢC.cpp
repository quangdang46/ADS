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
// Date: 08/02/22 16:30
// Program: Sap xep noi bot nguoc
// -------------------  Your code STARTS here !!!---------------------------

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> a(n);
		int b, c = 0;
		for(auto &x: a) cin >> x;
		vector<string> res;
		for(int i = n - 1; i > 0; i --){
			int max = a[i];
			b = 0;
			for(int j = i - 1; j >= 0; j --){
				if(a[j] > max){
					max = a[j];
					b ++;
				}
			}
			if(b == 0)
				continue;
			for(int j = 0; j < n - 1; j ++){
				if(a[j] > a[j + 1])
					swap(a[j], a[j + 1]);
			}
			string r = "Buoc " + to_string(c + 1) + ": ";
			for(int j = 0; j < n; j ++)
				r = r + to_string(a[j]) + " ";
			res.push_back(r);
			c++;
		}
		reverse(res.begin(), res.end());
		for(auto x: res) cout << x << endl;
	}
	return 0;
}
