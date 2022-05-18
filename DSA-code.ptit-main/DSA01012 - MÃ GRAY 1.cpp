#include<bits/stdc++.h>
#define mod              1000000007
#define ll               long long
#define	p(x)             pair<x,x>
#define v(x)             vector<x>
#define tree             node*
#define sz(a)            a.size()
#define f                first
#define s                second
#define pb(a)            push_back(a)
#define pf(a)            push_front(a)
#define FOR(i,l,r)       for(int i=l;i<r;i++)
#define FORX(i,l,r,x)    for(int i=l;i<r;i+=x)
#define FORD(i,l,r)      for(int i=l;i>=r;i--)
#define correct(x,y,n,m) 0<=(x)&&(x)<(n)&&0<=(y)&&(y)<(m)
#define cin(M,n)         FOR(i,0,n)cin>>M[i]
#define cout(M,n)        FOR(i,0,n)cout<<M[i]<<" "
#define rs(M,x)          memset(M,x,sizeof(M))
#define reset()          FOR(i, 0, 1001)A[i].clear(),check[i]=false
#define faster()         cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define run()            int t; cin >> t; while (t--)
#define pq(x)            priority_queue<x>
#define neg_pq(x)        priority_queue<x, vector<x>, greater<x>>
#define all(M)           M.begin(),M.end()
using namespace std;

//________________________NGUYỄN_NGỌC_TOÀN________________________//

v(string) M, N;

void Sort(int k, int l1, int r1, int l2, int r2) {
	if (k == 0)return;
	sort(M.begin() + l1, M.begin() + r1);
	sort(M.begin() + l2, M.begin() + r2, greater<string>());
	Sort(k - 1, l1, (l1 + r1) / 2, (l1 + r1) / 2, r1);
	Sort(k - 1, l2, (l2 + r2) / 2, (l2 + r2) / 2, r2);
}

int main() {
	faster();
	run() {
		M.clear();
		N.clear();
		int n; cin >> n;
		FOR(i, 0, pow(2, n)) {
			auto s = bitset<20>(i).to_string();
			M.pb(s.substr(20 - n, n));
		}
		int sf = pow(2, n);
		Sort(n, 0,  sf / 2, sf / 2, sf);
		cout(M, sz(M));
		cout << endl;
	}
}

//__________________________B20DCPT173_____________________________//
