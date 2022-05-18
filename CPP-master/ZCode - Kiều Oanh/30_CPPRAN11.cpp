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

int a[N];
int main(){
	faster();
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		for (int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        int result=(abs(a[0]-a[1]));
        for (int i=1; i<n-1; i++){
            int c=abs(a[i]-a[i+1]);
            if (result>c) result=c;
        }
        cout << result << endl;
	}
	return 0;
}

