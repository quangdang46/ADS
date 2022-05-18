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
    int n, even, odd;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a[i];
        b[i]=a[i];
    }
    sort(b, b+n);
    even = n/2;
    odd = n - even;
    int j = 0;
    for (int i=0; i<n; i+=2){
        if (j <= odd) a[i] = b[j];
        j++;
    }
    j = odd;
    for (int i=1; i<n; i+=2){
        if (j<n) a[i] = b[j];
        j++;
    }
    for (int i=0; i<n; i++) cout << a[i] << " ";
    cout << endl;
}
 
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
 