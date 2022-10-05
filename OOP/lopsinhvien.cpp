#include <bits/stdc++.h>

using namespace std;
using ll = long long ;

class ThiSinh{
private:
    string ten,ngaysinh;
    double d1,d2,d3,td;
public:
    ThiSinh(string name, string ns, double d1, double d2, double d3){
        this->ten = name;
        this->ngaysinh = ns;
        this->d1 = d1;
        this->d2 = d2;
        this->d3 = d3;
        this->td = d1 + d2 + d3;
    }
    void in(){
        cout << ten << ' ' << ngaysinh << ' ' << fixed << setprecision(1) << td << endl;
    }
};

int main(){
    string ten,ns;
    double d1,d2,d3;
    getline(cin,ten);
    getline(cin,ns);
    cin >> d1 >> d2 >> d3;
    ThiSinh x = {ten,ns,d1,d2,d3};
    x.in();
    return 0;
}