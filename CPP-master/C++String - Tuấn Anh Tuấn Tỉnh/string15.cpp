#include<bits/stdc++.h>

using namespace std;
//Dinh Tuan Tinh
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int dem=s.size();
		for(int i=0;i<s.size();i++){
			for(int j=i+1;j<s.size();j++){
				if(s[i]==s[j]){
					dem++;
				}
			}
		}
		cout<<dem<<endl;
	} 
	return 0;
}


