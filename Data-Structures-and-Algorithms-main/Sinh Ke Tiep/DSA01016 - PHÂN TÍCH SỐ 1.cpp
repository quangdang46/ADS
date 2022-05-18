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
// Date: 10/02/22 15:00
// Program: Phan Tich So
// -------------------  Your code STARTS here !!!---------------------------

int n, k, s, a[100];

void output(int n){
	cout << "(";
	for(int i = 1; i < n; i ++) cout << a[i] << " ";
	cout << a[n] << ")" << " ";
}

void Try(int i, int k, int s){
	for(int j = k; j >= 1; j--){
		if(s + j <= n){
			a[i] = j;
			s += j;
			if(s == n) output(i);
			else Try(i + 1, j, s);
			s -= j;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t; cin >> t;
	while(t--){
		cin >> n;
		memset(a, 0, sizeof(a));
		Try(1, n, 0);
		cout << endl;
	}
	return 0;
}
