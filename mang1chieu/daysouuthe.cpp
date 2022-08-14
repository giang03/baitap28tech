#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	vector <int> v;
	int n, c = 0, l = 0;
	while(cin >> n){
		v.push_back(n);
	}
	for(int i = 0; i < v.size(); i++){
		if(v[i] % 2 == 0) c++;
		else l++;
	}
	if((c > l && v.size() % 2 ==0) || (c < l && v.size() % 2 !=0)) cout << "YES\n";
	else cout << "NO\n";
    return 0;
}

