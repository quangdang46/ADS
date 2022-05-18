#include<bits/stdc++.h>

using namespace std;
//Dinh Tuan Tinh
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int sumle=0;
		int sumchan=0;
		for(int i=0;i<s.length();i++){
			if(i%2==0) sumchan=sumchan+(s[i]-'0');
			else sumle=sumle+(s[i]-'0');
		}
		int k=sumchan-sumle;
		//cout<<sumle<<" "<<sumchan<<endl;
		if(k%11==0) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
	return 0;
}


