#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct SinhVien
{
    string ten,ngaysinh,diachi;
    int toan,ly,hoa;
    void nhap(){
        getline(cin,ten);
        getline(cin,ngaysinh);
        getline(cin,diachi);
        cin >> toan >> ly >> hoa;
    }
    void in(){
        int diem = toan + ly + hoa;
        cout << ten << ' ' << ngaysinh << ' ' << diachi << ' ' << diem << ' ';
        if(diem >= 24){
            cout << "DO\n";
        }
        else {
            cout << "TRUOT\n";
        }
    }
};
int main(){
    int n; cin >> n;
    SinhVien a[n];
    int res = 0;
    for(int i = 0;i < n; i++){
        cin.ignore();
        a[i].nhap();
        int diem = a[i].toan + a[i].ly + a[i].hoa;
        res = max(res,diem);
    }
    cout << "DANH SACH THU KHOA :\n";
    for(auto x : a){
        int diem = x.toan + x.ly + x.hoa;
        if(diem == res){
            cout << x.ten << ' ' << x.ngaysinh << ' ' << x.diachi << ' ' << diem << endl;
        }
    }
    cout << "KET QUA XET TUYEN:\n";
    for(auto x : a){
        x.in();
    }
    return 0;
}