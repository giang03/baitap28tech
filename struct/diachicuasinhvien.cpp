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
    map <string,int> ma;
    int res = 0;
    for(int i = 0;i < n; i++){
        cin.ignore();
        a[i].nhap();
        ma[a[i].diachi]++;
        res = max(res,ma[a[i].diachi]);
    }
    for(auto x : ma){
        if(x.second == res){
            cout << x.first << endl;
        }
    }
    return 0;
}