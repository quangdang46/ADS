#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000000000000007
#define N 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int a[105][105];
void solve(){
    int n , n1, m1, m, r=0, c=0, prev, curr;
    cin >> n >> m;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++) cin >> a[i][j];
    }
    n1=n; m1=m;
    while (r<n && c<m){
        if (r+1==n || c+1==m) break;
        prev = a[r+1][c];
        for (int i=c; i<m; i++){
            curr = a[r][i];
            a[r][i] = prev;
            prev = curr;
        }
        r++;
        for (int i=r; i<n; i++){
            curr = a[i][m-1];
            a[i][m-1] = prev;
            prev = curr;
        }
        m--;
        if (r<n){
            for (int i=m-1; i>=c; i--){
                curr = a[n-1][i];
                a[n-1][i] = prev;
                prev = curr; 
            }
        }
        n--;
        if (c<m){
            for (int j=n-1; j>=r; j--){
                curr = a[j][c];
                a[j][c] = prev;
                prev = curr;
            }
        }
        c++;
    }
    for (int i=0; i<n1; i++){
        for (int j=0; j<m1; j++) cout << a[i][j] << " ";
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
 