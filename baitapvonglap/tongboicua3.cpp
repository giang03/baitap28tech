#include <bits/stdc++.h>

using namespace std;

long long sum(int n){
	long long tong = 0;
	for(int i = 1; i<= n;i++){
		if(i%3 == 0) tong += i;
	}
	return tong;
}

int main() {
	int n;
	cin >> n;
	cout << sum(n) << endl;
    return 0;
}

