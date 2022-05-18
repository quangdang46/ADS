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
 
bool a[N];
vi v;
void solve(){
	for (int i=2; i<N; i++) a[i]=true;
    for (int i=2; i*i<N; i++){
        if (a[i]==true){
            for (int j=i*i; j<N; j+=i){
                a[j]=false;
            }
        }
    }
    for (int i = 2; i < N; i++)
		if (a[i] ==  true)	v.push_back(i);
}
 
void inp(){
    ll n, i=0;
    cin >> n;
    n=sqrt(n);
    while (v[i]<=n){ 
        i++;
    }
    cout << i << endl;
}
 
int main(){
	faster();
	int t;
	cin >> t;
    solve();
	while (t--) inp();
	return 0;
}
 