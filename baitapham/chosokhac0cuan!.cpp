#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int mu(int n){
	if(n%4 == 0) return 6;
	else if(n%4 == 1) return 2;
	else if(n%4 == 2) return 4;
	else if(n%4 == 3) return 8;
	else return 1;
}

int cstc(int n){
	int a[5] = {1,1,2,6,4};
	if(n < 2) return 1;
	else{
		return (1ll*mu(n/5)*cstc(n/5)*a[n%5])%10;
	}
}

int main() {
	int n; cin >> n;
	cout << cstc(n) << endl;
    return 0;
}

