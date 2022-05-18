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

int a[N], result[N];

void solve(){
    int n, x, c=-1;
	cin >> n >> x;
	for (int i=0; i<n; i++) cin >> a[i];
    for (int i=1; i<n; i++){
        if (a[i]==x){
           c=i+1;
           break; 
        }
    }
    cout << c << endl;
}
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

