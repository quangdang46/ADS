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
 
void solve(){
    string x, y;
    int ix=0, iy=0, c=1, lenx, leny;
    cin >> x >> y;
    lenx= x.size();
    leny= y.size();
    if (lenx==0 || leny==0) c=0;
    vi ans(lenx+leny, 0);
    for (int i=lenx-1; i>=0; i--){
        int r=0;
        int a=x[i]-'0';
        iy=0;
        for (int j=leny-1; j>=0; j--){
            int b=y[j]-'0';
            int mul= a*b + ans[ix + iy] + r;
            r=mul/10;
            ans[ix + iy]=mul%10;
            iy++;
        }
        if (r>0) ans[ix + iy] += r;
        ix++;
    }
    int len=ans.size()-1;
    while (len>=0 && ans[len]==0) len--;
    if (len==-1) c=0;
    if (c==0) cout << 0;
    else{
        for (int i=len; i>=0; i--) cout << ans[i];
    }
    cout << endl;
}
 
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
 