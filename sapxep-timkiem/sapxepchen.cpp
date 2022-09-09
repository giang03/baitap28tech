#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;


int main() {
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 1; i< n  ; i++){
        int ind = i - 1, x = a[i];
        while(ind >= 0 && a[ind] > x){
        	a[ind + 1] = a[ind];
        	--ind;
		}
		a[ind + 1] = x;
        cout << "Buoc " << i << ": ";
        for(int j = 0; j < n; j++){
            cout << a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}

