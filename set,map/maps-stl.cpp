

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	int q; cin >> q;
    map <string,int> mp;
    while(q--){
        int n; cin >> n;
        string a; cin >> a;
        if(n == 1){
            int b; cin >> b;
            mp[a] += b;
        }
        else if(n == 2){
            if(mp.find(a) != mp.end()){
                mp.erase(a);
            }
        }
        else if (n == 3){
            cout << mp[a] << endl;
        }
    }
    return 0;
}

