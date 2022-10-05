#include <bits/stdc++.h>

using namespace std;
using ll = long long ;

class NhanVien{
private:
    string ma,ten,chuc;
    ll lcb,nc;
public :
    void nhap(){
        this->ma = "NV01";
        getline(cin,this->ten);
        cin >>this->lcb >> this->nc >> this->chuc;
    }
    void in(){
        cout << this->ma << ' ' << this->ten << ' ' ;
        ll phucap = 0;
        if(this->chuc == "GD") phucap = 250000;
        else if(this->chuc == "PGD") phucap = 200000;
        else if(this->chuc == "TP") phucap = 180000;
        else if(this->chuc == "NV") phucap = 150000;
        ll luongthang = this->lcb * this->nc;
        ll thuong = 0;
        if(this->nc >= 22 && this->nc < 25){
            thuong = luongthang *10/100;
        }
        else if(this->nc >= 25) thuong = luongthang *20/100;
        cout << luongthang << ' ' << thuong << ' ' << phucap << ' ';
        cout << luongthang + thuong + phucap << endl;
    }
};

int main(){
    NhanVien x;
    x.nhap();
    x.in();
    return 0;
}