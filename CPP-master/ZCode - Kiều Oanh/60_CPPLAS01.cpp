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

void solve(){
  int n, c=0;
  cin >> n;
  if (n==0) c=0;
  else if (n%9==0) c=9;
  else c=n%9;
  cout << c << endl;
}

int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

