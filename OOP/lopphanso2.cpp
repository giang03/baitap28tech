#include <bits/stdc++.h>

using namespace std;
using ll = long long ;

class PhanSo{
private:
    ll tu,mau;
public:
    void nhap(){
        cin >> tu >> mau;
    }
    void in(){
        cout << tu << '/' << mau << ' ';
    }
    void rutgon(){
        ll tmp = __gcd(tu,mau);
        tu /= tmp;
        mau /= tmp;
    }
    PhanSo operator + (PhanSo x){
        PhanSo c;
        ll tmp = __gcd(mau,x.mau);
        ll res = mau/tmp*x.mau;
        c.mau = res*res;
        c.tu = res/mau*tu + res/x.mau*x.tu;
        c.tu *= c.tu;
        return c;
    }
    PhanSo tich (PhanSo x , PhanSo y){
        PhanSo a;
        a.tu = tu * x.tu * y.tu;
        a.mau = mau *x.mau * y.mau;
        return a;
    }
};

int main(){
    int t; cin >> t;
    while(t--){
        PhanSo a,b,c,d;
        a.nhap(); b.nhap();
        c = a+b;
        c.rutgon(); c.in();
        d = a.tich(b,c); d.rutgon(); d.in();
        cout << endl;
    }
    return 0;
}