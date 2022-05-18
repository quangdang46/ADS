#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 9000000000000000007
#define N 21
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int a[N], n, b[N];
void print(){
    for (int i=1; i<=n; i++) cout << a[i];
    cout << " ";
}

void Try(int i){
    for (int j=1; j<=n; j++){
        if (!b[j]){
            a[i]=j;
            b[j]=1;
            if (i==n) print();
            else Try(i+1);
            b[j]=0;
        }
    }

}
void solve(){
    cin >> n;
    memset(b, 0, sizeof(b));
    Try(1);
    cout << endl;
}
 
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
 