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
		int n, r=0;
		cin >> n;
        for (int i=0; i<N; i++) a[i]=0;
		for (int i=0; i<n; i++){
            int v;
            cin >> v;
            if (v>0) a[++r]=v; 
        }
        sort(a, a+r+1);
        int j=1, i=1;
        while (i<=r){
            if (a[i]!=j) break;
            else{
                i++;
                while (a[i]==j) i++;
            }
            j++;
        }
        cout << j << endl;
	}
	return 0;
}

