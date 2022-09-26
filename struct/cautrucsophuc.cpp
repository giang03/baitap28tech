#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct SoPhuc
{
    ll thuc,ao;
    void nhap(){
        cin >> thuc >> ao;
    }
    void in(){
        cout << thuc << ' ' << ao << endl;
    }
};
void tong(SoPhuc a,SoPhuc b){
    cout << a.thuc+b.thuc << ' ' << a.ao+b.ao << endl;
}
void hieu(SoPhuc a,SoPhuc b){
    cout << a.thuc-b.thuc << ' ' << a.ao-b.ao << endl;
}
void tich(SoPhuc a,SoPhuc b){
    cout << a.thuc*b.thuc - a.ao*b.ao<< ' ' << a.ao*b.thuc + a.thuc*b.ao << endl;
}

int main(){
    SoPhuc a,b;
    a.nhap(); b.nhap();
    tong(a,b);
    hieu(a,b);
    tich(a,b);
    return 0;
}