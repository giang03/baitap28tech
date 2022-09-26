#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct SinhVien
{
    string ten,ngaysinh,diachi;
    float gpa;
    void nhap(){
        getline(cin,ten);
        getline(cin,ngaysinh);
        getline(cin,diachi);
        cin >> gpa;
    }
    void in(){
        cout << ten << ' ' << ngaysinh << ' ' << diachi << ' ' << fixed << setprecision(2) <<gpa << endl;
    }
};

int main(){
    int n; cin >> n;
    SinhVien a[n];
    for(int i = 0;i < n; i++){
        cin.ignore();
        a[i].nhap();
    }
    for(auto x : a){
        if(x.gpa >= 1.0)
            x.in();
    }
    return 0;
}