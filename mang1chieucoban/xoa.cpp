#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void xuly(int a[], int n, int x){
    bool ok = 0;
    for(int i = 0; i < n; i++){
        if(x == a[i]){
            ok = 1;
        }
    }
    if(!ok) cout << "NOT FOUND\n";
    else{
    	int cnt = 0;
        for(int i = 0; i < n; i++){
            if(x == a[i]) 
            	break;
			cout << a[i] << " ";
            cnt++;
        }    
        for(int i = cnt +1; i < n; i++){
        	cout << a[i] << ' ';
		}
    }
}

int main() {
    int n,x; cin >> n >> x;
    int a[n];
    for(int &x : a)
        cin >> x;
    xuly(a,n,x);
    return 0;
}

