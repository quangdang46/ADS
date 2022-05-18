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

int a[N], result[N];

void solve(){
    int n, min=base, result=0;
	cin >> n;
	for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n-1; i++){
        for(int j=1; j<n; j++){
            if (i!=j){
                int c=abs(a[i]+a[j]);
                if (c<min){
                    min=c;
                    result=a[i]+a[j]; 
                }
            }
        }
    }
    cout << result << endl;
}
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

/* 
bool compare(int a, int b){
    return (abs(a) < abs(b));
}
void solve(){
    int n, min=base, x, y;
	cin >> n;
	for (int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n, compare);
    for (int i=1; i<n; i++){
        int c = abs(a[i-1] +a[i]);
        if (c <= min){
            min = c;
            x = i-1;
            y = i;
        }
    }
    cout << a[x] + a[y] << endl;
}
*/
