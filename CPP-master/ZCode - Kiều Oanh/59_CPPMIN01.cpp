#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void findSmallest(int m, int s){
    int a[m];
    s--;
    for (int i=m-1; i>0; i--){
        if (s>9){
            a[i]=9;
            s-=9;
        }
        else{
            a[i]=s;
            s=0;
        }
    }
    a[0]=s+1;
    for (int i=0; i<m; i++) cout << a[i];
    cout << " ";
}

void findLargest(int m, int s){
    int a[m];
    for (int i=0; i<m; i++){
        if (s>=9){
            a[i]=9;
            s-=9;
        }
        else {
            a[i]=s;
            s=0;
        }
    }
    for (int i=0; i<m; i++) cout << a[i];
}

int main(){
	faster();
	int m, s;
    cin >> m >> s;
    if (s==0 && m==1) cout << 0 << " " << 0;
    else if (s>9*m  || s==0) cout << -1 << " " << -1;
    else {
        findSmallest(m, s);
        findLargest(m, s);
    }
	return 0;
}

