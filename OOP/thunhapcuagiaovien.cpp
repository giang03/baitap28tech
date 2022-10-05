#include <bits/stdc++.h>

using namespace std;
using ll = long long ;

class GiaoVien{
private:
    string ma,ten;
    ll luong,heso = 0;
public :
    void nhap(){
        getline(cin,this->ma);
        getline(cin,this->ten);
        cin >>this->luong;
        for(int i = 2; i < ma.size(); i++){
            this->heso = this->heso *10 + (this->ma[i] - '0');
        }
    }
    void in(){
        cout << this->ma << ' ' << this->ten << ' ' << this->heso << ' ';
        string tmp = "";
        for(int i = 0; i < 2; i++){
            tmp += this->ma[i];
        }
        ll tien = this->heso * this->luong;
        if(tmp == "HT"){
            tien += 2000000;
        }
        else if(tmp == "HP") tien += 900000;
        else tien += 500000;
        cout << tien << endl;
    }
};

int main(){
    GiaoVien x;
    x.nhap();
    x.in();
    return 0;
}