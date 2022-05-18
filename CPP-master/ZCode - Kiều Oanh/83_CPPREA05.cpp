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

void solve(){
    int n, l, r;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    l = 0; 
    r = n-1;
    for (int i=0; i<n && l<=r; i++){
        if (i%2==0) b[i]=a[r--];
        else b[i]=a[l++];
    }
    for (int i=0; i<n; i++) cout << b[i] << " ";
    cout << endl;
}
 
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
 