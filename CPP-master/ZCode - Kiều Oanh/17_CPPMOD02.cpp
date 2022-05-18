#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int main()
{
	faster();
	int t;
	cin >> t;
	while (t--){
		int x, y, n, c=-1;
		cin >> x >> y;
		for (int i=0; i<y; i++){
			if ((i*x)%y==1){
				c=i;
				break;
			}
		}
		cout << c << endl;
	}
	return 0;
}


