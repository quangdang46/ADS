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

int a[105][105];

void solve(){
    int n , m;
    cin >> n >> m;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++) cin >> a[i][j];
    }
	int k=1, r=n-1, c=m-1, start=0;
	while (k<=m*n){
		for (int i=start; i<=c; i++){
			k++;
			cout << a[start][i] << " ";
		}
		for (int i=start+1; i<=r; i++){
			k++;
			cout << a[i][c] << " ";
		}
		for (int i=c-1; i>=start && k<=m*n; i--){
			k++;
			cout << a[r][i] << " ";
		}
		for (int i=r-1; i>start && k<=m*n; i--){
			k++;
			cout << a[i][start] << " ";
		}
		start++; r--; c--;
	}   
    cout << endl;
}
 
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
 