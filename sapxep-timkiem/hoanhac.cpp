#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){
	int n,m; cin >> n >> m ;
	multiset <int > ms;
	int a[n], b[m];
	for(int &x : a){ 
		cin >> x; ms.insert(x);
	}
	for(int &x : b){
		cin >> x;
		auto it = ms.upper_bound(x);
		if(it != ms.begin()){
			cout << *(--it) << endl;
			ms.erase(it);
		}
		else cout << -1 << endl;
	}
    return 0;
}