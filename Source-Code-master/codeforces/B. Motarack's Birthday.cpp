#include <bits/stdc++.h>
using namespace std;
int main() {
	string a,b,c;
	int t;
	cin>>t;
	while(t--){
		int n;
		scanf("%d",&n);
		vector<int> v(n);
		for(int i=0;i<n;++i){
			scanf("%d",&v[i]);
		}
		int mn=1e9+1,mx=-1;
		for(int i=0;i<n;++i){
			if(v[i]==-1){
				if(i && v[i-1]!=-1){
					mn=min(mn,v[i-1]);
					mx=max(mx,v[i-1]);
				}
				if(i+1<n && v[i+1]!=-1){
					mn=min(mn,v[i+1]);
					mx=max(mx,v[i+1]);
				}
			}
		}
		int k=(mn+mx)/2;
		for(auto &x:v)
			if(x==-1)
				x=k;
		int res=0;
		for(int i=0;i+1<n;++i)
			res=max(res,abs(v[i]-v[i+1]));
		printf("%d %d\n",res, k);
	}
	return 0;
}