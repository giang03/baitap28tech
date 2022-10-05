#include <bits/stdc++.h>

using namespace std;
using ll = long long ;

class NhanVien{
private:
    string ma,ten,ngaysinh,gioitinh,diachi,masothue,ngaykhd;
public:
    NhanVien(){

    }
    NhanVien(string ma,string name, string gt, string ns, string dc, string ms, string nkh){
        this->ma = ma;
        this->ten = name;
        this->gioitinh = gt;
        this->ngaysinh = ns;
        this->diachi = dc;
        this->masothue = ms;
        this->ngaykhd = nkh;
    }
    void nhap(){
        ma = "00001";
        getline(cin,ten);
        stringstream ss(ten);
        string tmp;
        string res = "";
        while(ss >> tmp){
            tmp[0] = toupper(tmp[0]);
            for(int i = 1; i < tmp.size(); i++){
                tmp[i] = tolower(tmp[i]);
            }
            res = res + tmp + " ";
        }
        ten = res;
        cin >> this->gioitinh >> this->ngaysinh ;
        cin.ignore();
        getline(cin,this->diachi);
        cin >> this->masothue >> this->ngaykhd;
        if(ngaysinh[2] != '/'){
            ngaysinh.insert(0,"0");
        }
        if(ngaysinh[5] != '/'){
            ngaysinh.insert(3,"0");
        }
        if(ngaykhd[2] != '/'){
            ngaykhd.insert(0,"0");
        }
        if(ngaykhd[5] != '/'){
            ngaykhd.insert(3,"0");
        }
    }
    void in(){
        cout << this->ma << ' ' << this->ten  << this->gioitinh << ' ';
        cout << this->ngaysinh << ' ' << this->diachi << ' ' << this->masothue << ' ' << this->ngaykhd << endl;
    }
};


int main(){
    NhanVien x;
    x.nhap();
    x.in();
    return 0;
}