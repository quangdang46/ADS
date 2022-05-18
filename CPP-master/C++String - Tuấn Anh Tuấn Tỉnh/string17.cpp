#include<bits/stdc++.h>

using namespace std;
//Dinh Tuan Tinh
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int dem[100000]={0};
		for(int i=0;i<s.size();i++){
			dem[s[i]]++;
		}
		for(int i=0;i<s.size();i++){
			if(dem[s[i]]==1) cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}


