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

int a[N], b[N];

int sum(string s){
    int x=0;
    for (auto c:s) x=x*10 + c -'0';
    return x;
}

void solve(){
    string s;
    int ans=0;
    cin >> s;
    string t="";
    for (auto c:s){
        if (c>='0' && c<='9'){
            t+=c;
        }
        else{
            if (t.size()>0) ans+=sum(t);
            t="";
        }
    }
    if (t.size()>0) ans+=sum(t);
    cout << ans;
    cout << endl;
}
 
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
 