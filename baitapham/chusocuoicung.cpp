#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int mu(int a,int b){
	int res = 1;
	while(b){
		if(b%2==1){
			res *= a;
			res %= 10;
		}
		a *= a;
		a %= 10;
		b/=2;
	}
	return res;
}

int main() {
	int p,x;
	cin >> p >> x;
	cout << mu(p,x) << endl;
    return 0;
}

