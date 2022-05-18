#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 101
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int a[N][N], r[N];

void solve(){
    int n, m;
    bool row=false, col=false;
	cin >> n >> m;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (i==0 && a[i][j]==1) row=true;
            if (j==0 && a[i][j]==1) col=true;
            if(a[i][j]==1){
                a[i][0]=1;
                a[0][j]=1;
            }
        }
    }
    for (int i=1; i<n; i++){
        for (int j=1; j<m; j++){
            if (a[i][0]==1 || a[0][j]==1) a[i][j]=1;
        }
    }
    if (row){
        for (int i=0; i<m; i++) a[0][i]=1;
    }
    if (col){
        for (int i=0; i<n; i++) a[i][0]=1;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

