#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int n, a[1000];

void in(int x){
	for (int i=1; i<=x; i++)
		cout << a[i];
	cout << " ";
}

void Try(int x){    
	for (int i=0; i<=1; i++){
		a[x]=i;
		if (x==n) in(n);
		else 
			Try(x+1);
		
	}
}

int main()
{
	faster();
	int t;
	cin >> t;
	while (t--){
		cin >> n;
		Try(1);
		cout << endl;
	}
	return 0;
}


