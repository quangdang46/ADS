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

string a[10]={"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
void solve(){
  int n;
  string s, ans="";
  cin >> n >> s;
  for (int i=0; i<s.size(); i++){
      ans += a[s[i] - '0'];
  }
  sort(ans.begin(), ans.end(),  greater<char>());
  cout << ans << endl; 

}

int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

