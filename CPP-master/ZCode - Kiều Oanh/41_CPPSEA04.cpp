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

int binaryS(int l, int r, int k){
    if (r<l) return -1;
    int mid = (l+r)/2;
    if (k == a[mid]) return mid;
    if (k > a[mid]) return binaryS(mid+1, r, k);
    return binaryS(l, mid-1, k);
}

int findPivot(int l, int r){
    if (r < l) return -1;
    if (l == r) return l;
    int mid = (l+r)/2;
    if(mid < r && a[mid] > a[mid + 1]) return mid;
    if(mid > l && a[mid] < a[mid - 1]) return (mid - 1);
    if (a[l] >= a[mid]) return findPivot(l, mid - 1);
    return findPivot(mid +1, r);
} 

int findK(int n, int k){
    int pivot = findPivot(0, n);
    if (pivot == -1) return binaryS(0, n, k);
    if (a[pivot] == k) return pivot;
    if (a[0] <= k) return binaryS(0, pivot -1, k);
    return binaryS(pivot, n, k);
}
void solve(){
    int n, k;
	cin >> n >> k;
	for (int i=0; i<n; i++) cin >> a[i];
    cout << findK(n -1, k) + 1 << endl;
}
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

