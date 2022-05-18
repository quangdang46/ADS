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

ll a[N];
int main()
{
	faster();
	int t;
	cin >> t;
	while (t--){
		int n, j=-1;
		cin >> n;
		for (int i=0; i<N; i++) a[i]=0;
		for (int i=0; i<n; i++){
			ll b;
			cin >> b;
			if (b>0) a[++j]=b;
		}
		for (int i=0; i<n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}

