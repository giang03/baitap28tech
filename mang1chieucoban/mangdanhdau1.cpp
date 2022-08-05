#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	int dem = 0;
	for(int i = 0; i<n; i++){
		int ok = 0;
		for(int j = 0; j < i;j++){
			if(a[i] == a[j])
				ok = 1;
		}
		if(!ok) dem++;
	}
	cout << dem << endl;
    return 0;
}

