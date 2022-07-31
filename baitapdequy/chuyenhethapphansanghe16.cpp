#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void chuyen(ll n ){
	if(n == 0) return;
	else {
		if(n % 16 < 10){
			chuyen(n/16);
			cout << n%16;
		}
		else if(n%16 == 10){
			chuyen(n/16);
			cout << 'A';
		}
		else if(n%16 == 11){
			chuyen(n/16);
			cout << 'B';
		}
		else if(n%16 == 12){
			chuyen(n/16);
			cout << 'C';
		}
		else if(n%16 == 13){
			chuyen(n/16);
			cout << 'D';
		}
		else if(n%16 == 14){
			chuyen(n/16);
			cout << 'E';
		}
		else {
			chuyen(n/16);
			cout << 'F';
		}
	}
}

int main() {
	ll n; cin >> n;
	if(n == 0) cout << 0;
	else chuyen(n);
    return 0;
}

