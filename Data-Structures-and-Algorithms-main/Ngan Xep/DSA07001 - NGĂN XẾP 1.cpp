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
// Date: 08/04/22 15:45
// Program: Ngan xep 1
// -------------------  Your code STARTS here !!!---------------------------

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    stack<int> stk;
    while(cin >> s){
    	if(s == "push"){
    		int n; cin >> n;
    		stk.push(n);
    	}
    	else if(s == "pop") {if(!stk.empty()) stk.pop();}
    	else if(s == "show"){
    		vector<int> v;
    		if(stk.empty()){
    			cout << "empty" << endl;
    			continue;
    		}
    		while(!stk.empty()){
    			v.push_back(stk.top());
    			stk.pop();
    		}
    		reverse(v.begin(), v.end());
    		for(auto x: v){
    			cout << x << " ";
    			stk.push(x);
    		}
    		cout << endl;
    	}
    }
    return 0;
}
