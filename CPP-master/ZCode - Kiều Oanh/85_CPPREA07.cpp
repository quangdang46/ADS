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

int a[N];

bool comp(string a, string b){
    string ab=a.append(b);
    string ba=b.append(a);
    if (ab.compare(ba)>0) return true;
    else return false;
}

void solve(){
    int n;
    vs v;
    cin >> n;
    for (int i=0; i<n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end(), comp);
    for (int i=0; i<v.size(); i++) cout << v[i];
    cout << endl;
}
 
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
 