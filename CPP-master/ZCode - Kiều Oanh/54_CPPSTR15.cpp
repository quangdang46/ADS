#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int b[26];
void solve(){
    string s;
    int c=0;
	cin >> s;
	memset(b, 0, sizeof(b));
    for (int i=0; i<s.size(); i++){
        b[s[i]-'a']++;
    }
    for (int i=0; i<26; i++){
        c+= (b[i]*(b[i]+1)/2);
    }
    cout << c << endl;

}
int main()
{
	faster();
    int t;
    cin >> t;
    while (t--) solve();
	return 0;
}


