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

bool check[N];
void prime(){
	for (int i = 2; i <= N; i++)	check[i] = true;
    check[0] = false;
    check[1] = false;
	for (int i = 2; i*i <= N; i++){
		if (check[i] == true)
			for (int j = i*i; j <= N; j += i)
				check[j] = false;
	}
}

void solve(){
   int n;
   cin >> n;
   for (int i=2; i<n; i++){
       if (check[i] && check[n-i]){
           cout << i << " " << n-i;
           break;
       }
   }
   cout << endl;
}
int main()
{
	faster();
	int t;
	cin >> t;
    prime();
	while (t--) solve();
	return 0;
}


