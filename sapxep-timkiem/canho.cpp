#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){
	int n,m,k; cin >> n >> m >> k;
	int a[n], b[m];
	for(int &x : a) cin >> x;
	for(int &x : b) cin >> x;
	sort(a,a+n);
	sort(b,b+m);
	int i = 0, j = 0, dem = 0;
	while(i < n && j < m){
		if(abs(a[i] - b[j]) <= k){
			dem++;
			i++; j++;
		}
		else if(a[i] > b[j]){
			j++;
		}
		else i++;
	}
	cout << dem << endl;
    return 0;
}