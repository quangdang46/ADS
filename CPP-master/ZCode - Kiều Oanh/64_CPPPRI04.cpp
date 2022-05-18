#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 10007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int a[N];
void solve(){
    a[1]=1;
    for (int i=2; i<N; i++){
        if (a[i]==0){
            a[i]=i;
            for (int j=i*i; j<N; j+=i){
                if (a[j]==0) a[j]=i;
            }
        }
    }
}

void inp(){
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) cout << a[i] << " ";
    cout << endl;
}

int main(){
	faster();
	int t;
	cin >> t;
    solve();
	while (t--) inp();
	return 0;
}

