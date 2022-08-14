#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int n; cin >> n;
	int  res = 0, cnt = 1, idx = 0;
	// res luu ki luc cnt luu so phan tu khac nhau trong 1 doan
	// idx vi tri bat dau cua 1 doan khac nhau
	vector <int> v(n);
	for(int &x : v) cin >> x;
	for(int i = 1; i < v.size(); i++){
		if(v[i] > v[i-1]){
			cnt++;
		}
		else{
			cnt = 1;
		}
		if(cnt >= res ){
			// cap nhat ki luc
			res = cnt;
			// cap nhat vi tri bat dau doan khac nhau lon hon
			idx = i - res + 1;
		}
	}
	cout << res << endl;
	for(int i = 0; i < res ; i++){
		cout << v[idx + i] << " ";
	}
    return 0;
}

