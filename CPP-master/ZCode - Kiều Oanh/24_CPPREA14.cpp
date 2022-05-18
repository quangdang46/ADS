#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

ll a[11][N], b[100005];
int main()
{
	faster();
	int t;
	cin >> t;
	while (t--){
		int n, k, r=-1;
		cin >> k >> n;
		for (int i=0; i<11; i++)
            for (int j=0; j<N; j++) a[i][j]=0;
		for (int i=0; i<k; i++){
            for (int j=0; j<n; j++){
			    int v;
			    cin >> v;
			    b[++r]=v;
		    }
        }
        sort(b, b+r+1);
		for (int i=0; i<=r; i++)
			cout << b[i] << " ";
		cout << endl;
	}
	return 0;
}

