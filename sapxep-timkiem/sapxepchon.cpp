#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

void swap(int &a , int &b){
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	for(int i = 0; i< n - 1 ; i++){
		int idx = i;
		for(int j = i + 1; j >= 0; j--){
			if(a[idx] < a[j]){
				swap(a[idx],a[j]);
				idx = j;
			}
		}
		cout << "Buoc " << i+1 << ": ";
		for(int j = 0; j < n; j++){
			cout << a[j] << " ";
		}
		cout << endl;
	}
    return 0;
}

