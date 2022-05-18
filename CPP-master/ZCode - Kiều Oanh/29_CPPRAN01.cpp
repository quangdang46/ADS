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

int a[N], b[N];
int main(){
	faster();
	int t;
	cin >> t;
	while (t--){
		int n, k, j=-1;
		cin >> n >> k;
        a[0]=0;
        for (int i=1; i<=n; i++){
			int v;
			cin >> v;
			a[i]=a[i-1]+v;
		}
		for (int i=0; i<k; i++){
            int l, r;
            cin >> l >> r;
            b[++j]=a[r]-a[l-1];
        }
        for (int i=0; i<=j; i++) cout << b[i] << endl;
	}
	return 0;
}

