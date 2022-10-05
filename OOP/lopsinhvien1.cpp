#include <bits/stdc++.h>

using namespace std;
using ll = long long ;

class SinhVien{
private:
    string ma,ten,ngaysinh,lop;
    double gpa;
public:
    SinhVien(){

    }
    SinhVien(string name, string lop,string ns, double gpa){
        this->ten = name;
        this->ngaysinh = ns;
        this->gpa = gpa;
        this->lop = lop;
    }
    void nhap(){
        this->ma = "SV001";
        getline(cin,this->ten);
        cin >> this->lop >> this->ngaysinh >> this->gpa;
    }
    void in(){
        cout << this->ma << ' ' << this->ten << ' ' << this->lop << ' ' << this->ngaysinh << ' ' << fixed << setprecision(1) << this->gpa << endl;
    }
    void chuanhoan();
};

void SinhVien :: chuanhoan(){
    if(ngaysinh[2] != '/'){
        ngaysinh.insert(0,"0");
    }
    if(ngaysinh[5] != '/'){
        ngaysinh.insert(3,"0");
    }
}

int main(){
    SinhVien x;
    x.nhap();
    x.chuanhoan();
    x.in();
    return 0;
}