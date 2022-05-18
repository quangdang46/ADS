#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--){
		string s;
		int c=0, j=-1;
		cin >> s;
        for (int i=s.size(); i>=0; i--){
            j++;
            if (s[i]=='1'){
                if (j%4==0) c += 1;
                else if (j%4==1) c += 2;
                else if (j%4==2) c += 4;
                else c+=3;
            } 
            c %= 5;
        }
		if (c % 5==0) cout << "Yes";
        else cout << "No";
        cout << endl;
	}
	return 0;
}


