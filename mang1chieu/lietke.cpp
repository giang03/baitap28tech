#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool nt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

bool tn(int n){
	int tmp = n, res = 0;
	while(tmp){
		res = res*10 + tmp%10;
		tmp/= 10;
	}
	if(res == n) return 1;
	return 0;
}

bool cp(int n){
	int res = sqrt(n);
	return res*res == n;
}

bool sumnt(int n){
	int res = 0;
	while(n){
		res += n%10;
		n/= 10;
	}
	return nt(res);
}

int main() {
	int n; cin >> n;
	int demnt = 0, demtn = 0, demcp = 0, demsum = 0;
	vector <int> v(n);
	for(int &x : v) cin >> x;
	for(int i = 0; i < v.size(); i++){
		if(nt(v[i])) demnt ++;
		if(tn(v[i])) demtn ++;
		if(cp(v[i])) demcp ++;
		if(sumnt(v[i])) demsum ++;
	}
	cout << demnt << endl;
	cout << demtn << endl;
	cout << demcp << endl;
	cout << demsum << endl;
    return 0;
}

