#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
	int a[10000];
	int x, k = 0;
	int c = 0, l = 0;
	while(cin >> x){
		a[k++] = x;
	}
	for(int i = 0; i < k; i++){
		if(a[i] % 2 == 0) c++;
		else l++;
	}
	if(c > l) cout << "CHAN\n";
	else if(l > c) cout << "LE\n";
	else cout << "CHANLE\n";
    return 0;
}

