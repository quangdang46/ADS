#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 10005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

ll a[N];
int main(){
	faster();
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int b=n/2;
		for (int i=0; i<n; i++) cin >> a[i];
        ll amax=a[b];
        amax=max(amax, max(a[b-1], a[b+1]));
		cout << amax << endl;
	}
	return 0;
}

