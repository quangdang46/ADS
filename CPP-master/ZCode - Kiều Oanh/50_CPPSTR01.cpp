#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 101
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
 
int a[27];
void solve(){
    int k, c=0, check=0;
    string s;
    cin >> s;
    cin >> k;
    memset(a, 0, sizeof(a));
    if (s.size()>26){
        for (int i=0; i < s.size(); i++){
            if (s[i]>='a' && s[i]<='z') a[s[i]-'a']=1;
        }
        for (int i=0; i<26; i++){
            if (!a[i]) c++;
        }
        if (c<=k) check=1;
    }
    cout << check << endl;
}
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
 