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
    int n, c=0;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n-1; i++){
        if ((a[i]!=0) && a[i]==a[i+1]){
            a[i]*=2;
            a[i+1]=0;
            i++;
        }
    }
    for (int i=0; i<n; i++){
        if (a[i]!=0){
            a[c++]=a[i];
        }
    }
    while (c<n) a[c++]=0;
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
 