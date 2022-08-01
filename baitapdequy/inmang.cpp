#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void inxuoi(int a[], int n){
	if(n == 0)
		return;
	else{
		inxuoi(a,n-1);
		cout << a[n-1] << " ";
	}
}
void innguoc(int a[], int n){
	if(n == 0)
		return;
	else{
		cout << a[n-1] << " ";
		innguoc(a,n-1);
	}
}

int main() {
	int n; cin >> n;
	int a[n];
	for(int &x : a)
		cin >> x;
	inxuoi(a,n);
	cout << endl;
	innguoc(a,n);
    return 0;
}

