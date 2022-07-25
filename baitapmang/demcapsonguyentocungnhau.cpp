#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int ucln(int a,int b){
	if(b == 0) return a;
	return ucln(b,a%b);
}

int main() {
	int n; cin >> n;
	int a[n], dem = 0;
	for(int &x: a)
		cin >> x;
	for(int i = 0; i<n; i++){
		for(int j = i+1; j < n; j++){
			if(ucln(a[i],a[j]) == 1){
				dem++;
			}	
		}
	}
	cout << dem << endl;
    return 0;
}

