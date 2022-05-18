#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void solve(){
    string s1;
	getline(cin, s1);
	stringstream ss;
    vs v;
	ss << s1;
	while (!ss.eof())
	{
		ss >> s1;
		v.push_back(s1);
	}
    for (int i=v.size()-1; i>=0; i--){
        cout << v[i] << " ";
    }
	cout << endl;
}
int main()
{
	faster();
    int t;
    cin >> t;
    string s1;
    getline(cin, s1);
    while (t--) solve();
	return 0;
}


