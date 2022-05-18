#include<bits/stdc++.h>

using namespace std;
//Dinh Tuan Tinh
string s;
int k;
void input(){
	cin>>s>>k;
}
void solve(){
	int h[26]={0},t[26]={0};
	for(int i=0;i<s.length();i++){
		if('a'<=s[i]&&s[i]<='z'){
			h[s[i]-'a']++;
		}
		else{
			t[s[i]-'A']++;
		}
	}
	int t1=0,h1=0;
	for(int i=0;i<26;i++){
		if(t[i]>0) t1++;
		if(h[i]>0) h1++;
	}
	if(max(t1,h1)+k>=26) cout<<1<<endl;
	else cout<<0<<endl;
}
int main(){
	int t=1;
	cin>>t;cin.ignore();
	while(t--){
		input();solve();
	}
	return 0;
}


