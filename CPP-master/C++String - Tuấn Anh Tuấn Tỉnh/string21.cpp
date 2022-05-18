#include<bits/stdc++.h>

using namespace std;
//Dinh Tuan Tinh
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1="",s2="";
		cin>>s1;
		int dem=0,sum=0,j=0;
		for(int i=0;i<s1.size();i++){
			if(s1[i]>='0'&&s1[i]<='9'){
				sum=sum+(s1[i]-'0');
				s1.erase(s1.begin()+i);
				i--;
			}
		}
		sort(s1.begin(),s1.end());
		cout<<s1;
		cout<<sum<<endl;
	}
	return 0;
}


