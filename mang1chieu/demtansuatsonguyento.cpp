#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;


bool nt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return 0;
	}
	return 1;
}

int main() {
	vector <int> v;
	int n ;
	while(cin >> n){
		if(nt(n)) v.push_back(n);
	}
	for(int i = 0; i < v.size(); i++){
		int ok = 1, dem = 1;
		for(int j = 0; j < i; j++){
			if(v[i] == v[j]){
				ok = 0;
				break;
			}
		}
		if(ok){
			for(int j = i+1; j < v.size(); j++){
				if(v[i] == v[j]) dem++;
			}
			cout << v[i] << " " << dem << endl;
		}
	}
    return 0;
}

