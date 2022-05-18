#include<iostream>
#include<math.h>
#include<algorithm>
#include<stdbool.h>
using namespace std;
bool ok = false;
int snt(int n) {
	if (n < 2)return 0;
	else
		for (int i = 2; i <= sqrt(n); i++)
			if (n % i == 0)return 0;
	return 1;
}
void sinh(int*M,int n) {
	int a = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (M[i] == 0) {
			M[i] = 1; a = 1;
			for (int j = i + 1; j < n; j++)M[j] = 0;
			break;
		}
	}
	if (a == 0)ok = true;
}
int main() {
	int t; cin >> t;
	while (t--) {
		ok = false;
		int n; cin >> n;
		int M[20];
		for (int i = 0; i < n; i++)cin >> M[i];
		sort(M, M + n,greater<int>());
		int N[20] = { 0 };
		while (!ok) {
			int sum = 0;
			for (int i = 0; i < n; i++) {
				if (N[i] == 1)sum += M[i];
			}
			if (snt(sum)) {
				for (int i = 0; i < n; i++) {
					if (N[i] == 1)cout << M[i] << " ";
				}
				cout << endl;
			}
			sinh(N, n);
		}
	}
}
