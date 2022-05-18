#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;

string StandardName(string &s)
{
	for (int i = 0; i < s.length(); i++)
		s[i] = tolower(s[i]);
	*s.begin() = toupper(*s.begin());
	return s;
}

string upper(string &s)
{
	for (int i = 0; i < s.length(); i++)
		s[i] = toupper(s[i]);
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
	for (int i = 0; i < vs.size()-1 ; i++){
		if (i == vs.size()-2) cout << StandardName(vs[i]) <<  ", ";
		else cout << StandardName(vs[i]) <<  " ";
	}
	cout << upper(vs[vs.size()-1]);
}

int main()
{
	faster();
	solve();
	return 0;
}


