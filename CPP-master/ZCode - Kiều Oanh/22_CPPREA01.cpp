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

ll a[N];
int main()
{
	faster();
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		for (int i=0; i<N; i++) a[i]=-1;
		for (int i=0; i<n; i++){
			ll b;
			cin >> b;
			if (b<n && b>=0) a[b]=b;
		}
		for (int i=0; i<n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}


/*
#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
ll *a = new ll[1000005], *b = new ll[1000005], n;
int main()
{
	faster();
	int t;
	cin >> t;
	while (t--){
		cin >> n;
		for (int i=0; i<n; i++)
			b[i]=-1;
		for (int i=0; i<n; i++){
			cin >> a[i];
			if (a[i]>=0 && a[i]<n) b[a[i]]=a[i];
		}
		for (int i=0; i<n; i++)
			cout << b[i] << " ";
		cout << endl;
	}
	return 0;
}
*/

