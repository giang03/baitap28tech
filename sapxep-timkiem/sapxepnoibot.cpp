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
		for(int j = 0; j < n - i - 1; j++){
			if(a[j] > a[j+1]){
				swap(a[j+1],a[j]);
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

