#include<bits/stdc++.h>

using namespace std;
//Dinh Tuan Tinh
int ans=0;
string s;
void stringRemove(){//ham tay(xoa)
	for(int i=0;i<s.length();i++){
		if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='0'){
			//tim xau con chua 100
			ans+=3;//dem so luong ky tu bi xau con loai bo
			s.erase(i,3);//xoa di xau con "100" tu xau me(xoa tu vi tri thu i va xoa di 3 ky tu)
			stringRemove();
		}
	}
}
int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		ans=0;//khoi tao bien dem bang 0 sau moi bo test
		cin>>s;
		stringRemove();
		cout<<ans<<endl;
	}
	return 0;
}


