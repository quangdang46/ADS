#include<bits/stdc++.h>

using namespace std;
//Dinh Tuan Tinh
int main(){
	long long t;
	cin>>t;
	cin.ignore();
	while(t--){
		long long start;
		string s;
		getline(cin,s);
		long long i=s.size()-1;
		string res="";
		long long end=s.size();
		while(i>=0){
			if(s[i]==' '){
				start=i+1;
				while(start!=end){
					res+=s[start++];
				}
				res+=" ";
				end=i;
			}
			i--;
		}
		start=0;
		while(start!=end){
			res+=s[start++];
		}
		cout<<res<<endl;
	}
	return 0;
}


