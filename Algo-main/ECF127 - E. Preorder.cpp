#include <bits/stdc++.h>
using namespace std;
/* 𝑴𝒚 𝒄𝒂𝒕 𝒊𝒔 𝒍𝒐𝒐𝒌𝒊𝒏𝒈 𝒂𝒕 𝒚𝒐𝒖 ◉‿◉. */
/* 𝑭𝒆𝒆𝒅 𝒊𝒕 𝒂𝒏𝒅 𝒊𝒕 𝒘𝒊𝒍𝒍 𝒉𝒆𝒍𝒑 𝒚𝒐𝒖 𝒖𝒏𝒅𝒆𝒓𝒔𝒕𝒂𝒏𝒅 𝒕𝒉𝒆 𝒑𝒓𝒐𝒃𝒍𝒆𝒎 (｡◕‿◕｡). */
/*
   ██          ██
   █▒█        █▒█
  █▒███    ███▒█
  █▒████████▒▒█
  █▒████▒▒█▒▒██
  ████▒▒▒▒▒████
   █▒▒▒▒▒▒▒███
  █▒▒▒▒▒▒▒▒████      █
 ██▒█▒▒▒▒▒█▒▒████  █▒█
 █▒█●█▒▒▒█●█▒▒███ █▒▒█
 █▒▒█▒▒▒▒▒█▒▒▒██ █▒▒█
  █▒▒▒=▲=▒▒▒▒███ ██▒█
  ██▒▒█♥█▒▒▒▒███  ██▒█
    ███▒▒▒▒████    █▒█
      ██████        ███
       █▒▒████      ██
       █▒▒▒▒▒████ _██
       █▒██▒██████▒█
       █▒███▒▒▒█████
     █▒████▒▒▒▒████
      █▒███▒██████
*/
#define int long long
#define ll long long
#define db double
#define fi first
#define se second
#define all(a) a.begin(), a.end()
#define reset(a, val) memset(a, val, sizeof(a));
#define For(i, a, b) for (int i = a; i <= b; i++)
#define rFor(i, a, b) for (int i = a; i >= b; i--)

typedef pair<int, int> ii;
typedef pair<db, db> dd;
typedef vector<int> v;

const ll oo = 9223372036854775807;
const int mod = 998244353;
const int N = 1e6 + 5;

int di[] = {-1, 0, 0, 1, -1, -1, 1, 1};
int dj[] = {0, -1, 1, 0, -1, 1, -1, 1};
/**/
int n, len, ans;
int a[N];
/*Main*/
auto DFS(int node)
{
    if (2 * node + 1 > len)
        return to_string(a[node]);
    auto x = DFS(2 * node);
    auto y = DFS(2 * node + 1);
    if (x != y)
        ans = (ans * 2) % mod;
    if (x > y)
        swap(x, y);
    return to_string(a[node]) + x + y;
}
void init()
{
    ans = 1;
}
void solution()
{
    cin >> n;
    len = (1 << n) - 1;
    For(i, 1, len)
    {
        char x;
        cin >> x;
        a[i] = (x == 'B');
    }
    DFS(1);
    cout << ans << endl;
}
/**/
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        // db start = (db)(clock());
        init();
        solution();
        // db end = (db)(clock());
        // cout << (end - start) / CLOCKS_PER_SEC <<"s"<<endl;
    }
    return 0;
}
/* 𝑴𝒚 𝒄𝒐𝒅𝒆 𝒉𝒂𝒔 𝒆𝒏𝒅𝒆𝒅. */
/* 𝑺𝒆𝒆 𝒚𝒐𝒖 𝒂𝒈𝒂𝒊𝒏 ❤ */
/*
♫ ♪ ♫ ♪ ♫ ♪ ♫ ♪
▄ █ ▄ █ ▄ ▄ █ ▄ █ ▄ █
Min- - - - - - - - - - - -●Max
*/
