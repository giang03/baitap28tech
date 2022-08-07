#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

void maxmax(vector <int> v){
	int max = INT_MIN, max2 = INT_MIN;
	for(int i = 0; i < v.size(); i++){
		if(v[i] > max){
			max2 = max;
			max = v[i];
		}
		else if(v[i] > max2){
			max2 = v[i];
		}
	}
	cout << max << " " << max2 << endl;
}

int main() {
	int n; cin >> n;
	vector <int> v(n);
	for(int &x : v) cin >> x;
	maxmax(v);
    return 0;
}

