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
// Date: 24/02/2022 10:27
// Program: So thu tu to hop
// -------------------  Your code STARTS here !!!---------------------------

int a[10], b[10], n, k, cnt;
bool ok;

void init(){
	cin >> n >> k;
	for(int i = 1; i <= k; i ++){
		cin >> b[i];
		a[i] = i;
	}
	ok = false;
	cnt = 1;
}

bool check(){
	for(int i = 1; i <= k; i ++)
		if(a[i] != b[i])
			return false;
	return true;
}

void next(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i) --i;
	if(i == 0)
		ok = true;
	else{
		a[i] ++;
		for(int j = i + 1; j <= k; j ++) a[j] = a[j - 1] + 1;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t; cin >> t;
	while(t--){
		init();	
		while(!ok){
			if(check()){
				cout << cnt << endl;
				break;
			}
			cnt++;
			next();
		}
	}
	return 0;
}
