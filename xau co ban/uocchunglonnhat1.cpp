#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,x,y; cin >> a >> x >> y;
    long long r = __gcd(x,y);
    for(int i = 0; i < r; i++){
        cout << a;
    }
    return 0;
}
