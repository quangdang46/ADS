#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

vector <string> vs2;

string StandardName(string &s)
{
	for (int i = 0; i < s.length(); i++)
		s[i] = tolower(s[i]);
	return s;
}

void solve()
{
	stringstream ss;
	vector <string> vs;
	string s;
	getline(cin,s);
	ss << s;
	while (!ss.eof())
	{
		ss >> s;
		vs.push_back(s);
	}
	string s1 = vs[vs.size() - 1];
	for (int i = 0; i < vs.size() - 1; i++)
		s1.push_back(*vs[i].begin()) ;
	StandardName(s1);
	int d=0;
	for (int i = 0; i < vs2.size(); i++)
		if(vs2[i].compare(s1) == 0)
			d++;
	vs2.push_back(s1);
	if(d==0)
		cout << s1 << "@ptit.edu.vn";
	else 
	cout << s1 << d+1 << "@ptit.edu.vn";
}

int main()
{	
	solve();
    return 0;
}
