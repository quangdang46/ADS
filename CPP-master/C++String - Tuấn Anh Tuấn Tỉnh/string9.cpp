#include<bits/stdc++.h>

using namespace std;
//Dinh Tuan Tinh
int main(){
	int t;
	cin>>t;
 	while(t--){
		string s;
		cin>>s;
		int sum=0, res=0;
		for(int i=0;i<s.size();i++){
			if(s[i]>='0'&&s[i]<='9'){
				sum=sum*10+s[i]-'0';
			}
			else{
				res=(res>sum)?res:sum;
				sum=0;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}


