#include<bits/stdc++.h>

using namespace std;
//Dinh Tuan Tinh
int main(){
	string s;
	getline(cin,s);
	while(s[0]==' ') s.erase(s.begin());
	for(int i=0;i<s.size();i++){
		if(s[i]==' '&&s[i+1]==' '){
			s.erase(s.begin()+i+1);
			i--;
		}
	}
	int mark=0;
	for(int i=0;i<s.size();i++){
		if(s[i]==' '&&((s[i+1]>=65&&s[i+1]<=90) || (s[i+1]>=97&&s[i+1]<=122))) mark=1;
	}
	for(int i=0;i<s.size();i++){
		if(s[i]>=65&&s[i]<=90) s[i]+=32;
	}
	int j=0; 
	int kt=1;
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]!=' '&&s[i-1]==' '){
			j=i;
			s.insert(s.begin()+j-1,',');
			kt=0;
			break;
		}
	}
	if(j==0) s.insert(s.begin(),',');
	if(s[0]!=',') s[0]-=32;
	for(int i=j+1;i<s.size();i++) s[i]-=32;
	for(int i=1;i<j;i++){
		if(s[i]==' ') s[i+1]-=32;
	}
	cout<<s;
	return 0;
}


