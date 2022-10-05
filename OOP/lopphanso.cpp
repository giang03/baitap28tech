#include <bits/stdc++.h>

using namespace std;
using ll = long long ;

class PhanSo{
private:
    ll tu,mau;
public:
    PhanSo(ll a, ll b){
        this->tu = a;
        this->mau = b;
    }
    void in(){
        cout << tu << '/' << mau << endl;
    }
    void rutgon(){
        ll tmp = __gcd(tu,mau);
        tu /= tmp;
        mau /= tmp;
    }
};

int main(){
    ll a,b; cin >> a >> b;
    PhanSo x = {a,b};
    x.rutgon();
    x.in();
    return 0;
}