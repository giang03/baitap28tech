#include <bits/stdc++.h>
using namespace std;
int MOD = 1e9 + 7;

long long powmod(long long a, long long b){
    long long tmp = 1;
    while(b){
        a %= MOD;
        if(b % 2 != 0){
            tmp *= a;
            tmp %= MOD;
        }
        a *= a;
        b/=2;
    }
    return tmp;
}

int main(){
    string n; cin >> n;
    long long m; cin >> m;
    long long r = 0;
    for(int i = 0; i < n.size(); i++){
        r = r*10 + n[i] -  '0';
        r %= MOD;
    }
    cout << powmod(r,m) << endl;
    return 0;
}
