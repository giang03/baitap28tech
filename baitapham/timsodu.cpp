#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll powmod(int n,int x){
	ll res = 1;
	for(int i = 0; i<x; i++){
		res *= 2;
		if(res > n){
			return res;
		}
	}
	return res;
}

int main() {
	int n,x; cin >> n >> x;
	cout << n%powmod(n,x) << endl;
    return 0;
}

