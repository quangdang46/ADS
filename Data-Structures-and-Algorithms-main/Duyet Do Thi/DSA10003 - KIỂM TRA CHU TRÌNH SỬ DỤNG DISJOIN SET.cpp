#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> p;
typedef vector<vector<int> > vt;
typedef vector<pair<int, int> > vp;

const ll mod = 1e9 + 7;
const int oo = 1e6 + 7;

#define f first
#define s second
#define pb push_back
#define ep emplace_back
#define sz(a) (int) a.size()
#define ms(s, n) memset(s, n, sizeof(s))
#define present(t, x) (t.find(x) != t.end())
#define all(a) (a.begin(), a.end())
#define For(i, l, r) for (int i = l; i <= r; i++)
#define Fod(i, r, l) for (int i = r; i >= l; i--)
#define fillchar(a, x) memset(a, x, sizeof (a))
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void FileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

// Author: Nguyen Quoc Dat
// ID: B20DCPT053
// Organization: PTIT
// Date: 07/03/22 10:30
// Program: Kiem tra chu trinh su dung DISJOIN SET
// -------------------  Your code STARTS here !!!---------------------------

int parent[1005];
vector<pair<int, int> > adj;

int root(int u){
    return (parent[u] == u) ? u : (parent[u] = root(parent[u]));
}

bool Check(){
    for(auto a: adj){
        int u = root(a.f), v = root(a.s);
        if(u == v)
            return true;
        parent[u] = v;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while(t--){
        adj.clear();
        int n, m; cin >> n >> m;
        for(int u = 1; u <= n; ++u) parent[u] = u;
        for(int i = 1; i <= m; i ++){
            int x, y; cin >> x >> y;
            adj.push_back({x, y});
        }
        if(Check()) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
