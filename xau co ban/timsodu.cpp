#include <bits/stdc++.h>
using namespace std;

int main(){
    string n; cin >> n;
    long long r = 0;
    for(int i = 0; i < n.size(); i++){
        r = r*10 + n[i] -  '0';
        r %= 4;
    }
    if(r == 0) cout << 4 << endl;
    else cout << 0 << endl;
    return 0;
}
