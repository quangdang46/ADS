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

int a[N], n, k;
void print(){
    for (int i=1; i<=k; i++) cout << a[i];
    cout << " ";
}

void Try(int i){
    for (int j=a[i-1]+1; j<=n-k+i; j++){
        a[i]=j;
        if (i==k) print();
        else Try(i+1);
    }

}
void solve(){
    cin >> n >> k;
    a[0]=0;
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
 