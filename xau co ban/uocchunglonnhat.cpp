#include <bits/stdc++.h>
using namespace std;

int main(){
    string n; cin >> n;
    long long m; cin >> m;
    long long r = 0;
    for(int i = 0; i < n.size(); i++){
        r = r*10 + n[i] -  '0';
        r %= m;
    }
    cout << __gcd(m,r) << endl;
    return 0;
}
