#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N	10005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
int a[10];
void solve(){
    int n, c=0;
    memset(a, 0, sizeof(a));
    cin >> n;
    int i=2;
     while (n != 1 && c < 5){
        while (n%i==0){
            c++;
            a[c]=i;
            n /= i;
        }
        i++;
   }
   if (c==3 && a[1]!=a[2] && a[2]!=a[3]) cout << 1;
   else cout << 0;
   cout << endl;
}
int main()
{
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}


