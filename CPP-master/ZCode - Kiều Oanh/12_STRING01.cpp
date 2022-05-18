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
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	stringstream ss;
	vector <string> vs;
	ss << s1;
	while (!ss.eof())
	{
		ss >> s1;
		vs.push_back(s1);
	}
	for (int i=0; i<vs.size(); i++)
	{
		if (vs[i].compare(s2)!=0)
			cout << vs[i] << " ";
	}
	return 0;
	return 0;
}


