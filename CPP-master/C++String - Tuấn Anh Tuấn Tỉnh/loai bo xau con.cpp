#include<bits/stdc++.h>

using namespace std;
//Dinh Tuan Tinh
int main(){
	string s, chuoicon;
	getline(cin,s);
	getline(cin,chuoicon);
	int pos=s.find(chuoicon);//tra ve vi tri dau tien xuat hien chuoi con trong chuoi me
	s.erase(pos,chuoicon.size());//xoa di chuoi con trong chuoi me
	cout<<s<<endl;
	return 0;
}


