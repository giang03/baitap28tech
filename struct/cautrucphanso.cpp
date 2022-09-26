#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll lcm(ll a, ll b){
    return a/__gcd(a,b)*b;
}

struct PhanSo
{
    ll tu,mau;
    void nhap(){
        cin >> tu >> mau;
    }
    void in(){
        cout << tu << '/' << mau << endl;
    }
    void chuyen(){
        if(mau < 0){
            tu *= -1;
            mau *= -1;
        }
    }
    void rutgon(){
        long long uc = __gcd(abs(tu),mau);
        tu /= uc;
        mau /= uc;
    }
};

void tong(PhanSo a, PhanSo b){
    PhanSo tmp;
    long long msc = lcm(a.mau,b.mau);
    tmp.mau = msc;
    tmp.tu = msc/a.mau * a.tu + msc/b.mau*b.tu;
    tmp.rutgon();
    tmp.in();
}
void hieu(PhanSo a, PhanSo b){
    PhanSo tmp;
    long long msc = lcm(a.mau,b.mau);
    tmp.mau = msc;
    tmp.tu = msc/a.mau * a.tu - msc/b.mau*b.tu;
    tmp.rutgon();
    tmp.in();
}

int main(){
    PhanSo a,b;
    a.nhap(); b.nhap();
    a.chuyen(); b.chuyen();
    a.rutgon(); b.rutgon();
    a.in(); b.in();
    tong(a,b);
    hieu(a,b);
    return 0;
}