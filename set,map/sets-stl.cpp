

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int q; cin >> q;
    set <int> se;
    while(q--){
        int n, x; cin >> n >> x;
        if(n == 1){
            se.insert(x);
        }
        else if(n == 2){
            if(se.find(x) != se.end()){
                se.erase(x);
            }
        }
        else{
            if(se.find(x) != se.end()){
                cout << "Yes\n";
            }
            else cout << "No\n";
        }
    }
    return 0;
}

