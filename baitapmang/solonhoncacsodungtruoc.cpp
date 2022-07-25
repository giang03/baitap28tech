#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int check(int a[], int n){
	for(int i = 0; i < n; i++){
		if(a[n] <= a[i]) return 0;
	} 
	return a[n];
}
int main() {
	int n; cin >> n;
	int a[n];
	for(int i = 0; i<n; i++)
		cin >> a[i];
	cout << a[0] << " ";
	for(int i = 1; i<n; i++){
		if(check(a,i)) cout << a[i] << " "; 
	}	
    return 0;
}

