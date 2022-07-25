#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void swap(int &a,int &b){
	int tmp = a;
	a = b;
	b = tmp;
}

void daytang(int a[],int h, int n){
	for(int i = h+1; i<n; i++){
		for(int j = i+1; j<n; j++){
			if(a[i] > a[j]){
				swap(a[i],a[j]);
			}
		}
	}
}

void daygiam(int a[], int n){
	for(int i = 0; i<n; i++){
		for(int j = i+1; j<n; j++){
			if(a[i] < a[j]){
				swap(a[i],a[j]);
			}
		}
	}
}

int main() {
	int n; cin >> n;
	int a[n],b[n], k=0, h = n-1;
	for(int i = 0; i <n; i++){
		int x; cin >> x;
		if(x%2==0) a[h--] = x;
		else a[k++] = x;
	}
	daytang(a,h,n);
	daygiam(a,k);
	for(int i = 0; i<n ; i++)
		cout << a[i] <<" ";
    return 0;
}

