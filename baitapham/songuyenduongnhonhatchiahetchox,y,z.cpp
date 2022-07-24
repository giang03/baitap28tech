#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll ucln(int a, int b){
	if(b==0) return a;
	return ucln(b,a%b);
}

ll bcnn(int a, int b){
	return a/(ucln(a,b))*b;
}

int main() {
	int x,y,z,n; cin >> x >> y >> z >> n;
	ll a = pow(10,n-1), b = pow(10,n);
	ll c = bcnn(x,bcnn(y,z));
	if(c >= b) cout << -1 << endl;
	else if(c >= a && c < b ) cout << c << endl;
	else {
		c = (a/c+1)*c;
		cout << c << endl; 
	}
    return 0;
}

