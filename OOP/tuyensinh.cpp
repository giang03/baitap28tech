#include <bits/stdc++.h>

using namespace std;
using ll = long long ;

class ThiSinh{
private:
    string ma,ten;
    double d1,d2,d3;
public :
    void nhap(){
        getline (cin,this->ma);
        getline (cin, this->ten);
        cin >> d1 >> d2 >> d3;
    }
    void in(){
        double tong = d1 + d2 + d3;
        cout << this->ma << ' ' << this->ten << ' ';
        int id = this->ma[2] - '0';
        if(id == 1) tong += 0.5;
        else if( id == 2) tong += 1;
        else tong += 2.5;
        cout << id << ' ' <<  tong << ' ';
        if(tong >= 24) cout << "TRUNG TUYEN" << endl;
        else cout << "TRUOT" << endl;
    }
};

int main(){
    ThiSinh x;
    x.nhap();
    x.in();
    return 0;
}