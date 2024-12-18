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
// Program: Kiem tra node la
// -------------------  Your code STARTS here !!!---------------------------

typedef struct node {
	int data;
	struct node *left;
	struct node *right;
} *tree;

tree MakeRoot(int value){
	tree p = new node();
	p->data = value;
	p->left = NULL;
	p->right = NULL;
	return p;

}
tree Search(tree t, int x){
	if(t == NULL) return NULL;
	if(t->data == x) return t;
	tree p = Search(t->left, x);
	if(p == NULL) p = Search(t->right, x);
	return p;
}
void addLeft(tree &t, int u, int v){
	tree p = Search(t, u), q;
	if(p == NULL) return;
	if(p->left == NULL) {
		q = MakeRoot(v);
		p->left = q;
	}
}

void addRight(tree &t, int u, int v){
	tree p = Search(t, u), q;
	if(p == NULL) return;
	if(p->right == NULL) {
		q = MakeRoot(v);
		p->right = q;
	}
}

int countLeaf(tree t){
	if(t == NULL) 
		return 0;
	if(t->left == NULL && t->right == NULL) 
		return 1;
	return countLeaf(t->left) + countLeaf(t->right);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
		tree root = NULL;
		for(int i = 0; i < n; ++i){
			int u, v; 
			char x; 
			cin >> u >> v >> x;
			if(root == NULL){
				root = MakeRoot(u);
			}
			if(x == 'L') addLeft(root, u, v);
			else addRight(root, u, v);
		}
		if(countLeaf(root->left) == countLeaf(root->right)) cout << "1";
		else cout << "0";
		cout << endl;
    }
    return 0;
}
