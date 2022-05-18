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
char a[26];
void solve(){
    string s;
    int c=0;
	cin >> s;
	memset(b, 0, sizeof(b));
    memset(a, '0', sizeof(a));
    a[0]=s[0];
    b[0]=1;
    for (int i=1; i<s.size(); i++){
        int r=0;
        for (int j=0; j<=c; j++){
            if (s[i]==a[j]){
                r=1;
                b[j]++;
            }
        }
        if (r==0){
            a[++c]=s[i];
            b[c]++;
        }
    }
    for (int i=0; i<26; i++){
        if (b[i]==1) cout << a[i];
    }
    cout << endl;
}

int main()
{
	faster();
    int t;
    cin >> t;
    while (t--) solve();
	return 0;
}


