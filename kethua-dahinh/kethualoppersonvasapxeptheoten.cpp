#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;

class Person{
private:
    string ten,ngaysinh,diachi;
public :
    void nhap(){
        getline(cin,ten);
        getline(cin, ngaysinh);
        getline(cin,diachi);
    }
    void Chuanhoa(){
        if(ngaysinh[2] != '/') ngaysinh ="0" + ngaysinh;
        if(ngaysinh[5] != '/') ngaysinh.insert(3,"0");
        stringstream ss(ten);
        string tmp,res = "";
        while(ss >> tmp){
            res += toupper(tmp[0]);
            for(int i = 1; i < tmp.size(); i++){
                res += tolower(tmp[i]);
            }
            res += " ";
        }
        res.pop_back();
        ten = res;
    }
    void in(){
        cout << this->ten << ' ' << this->ngaysinh << ' ' << this->diachi << ' ';
    }
    string getten(){
        stringstream ss(ten);
        string tmp,res = "";
        vector <string> v;
        while(ss >> tmp){
            v.push_back(tmp);
        }
        res += v.back();
        for(int i = 0; i < v.size() - 1; i++)
            res += v[i];
        return res;
    }
};

class Student : public Person{
private:
    string ma,lop;
    double gpa;
public : 
    void nhap(int ma){
        this->ma = to_string(ma);
        while(this->ma.size() < 4){
            this->ma = "0" + this->ma;
        }
        Person :: nhap();
        cin >> this->lop >> this->gpa;
    }
    void in(){
        cout << this->ma << ' ';
        Person :: in();
        cout << this->lop << ' '  << fixed << setprecision(2) << this->gpa << endl;   
    }
    string getma(){
        return this->ma;
    }
};

bool cmp(Student a, Student b){
    string name1 = a.getten(), name2 = b.getten();
    if(name1 != name2) return name1 < name2;
    return a.getma() < b.getma();
}

int main(){
    int n; cin >> n;
    Student x[n];
    for(int i = 0; i < n; i++){
        cin.ignore();
        x[i].nhap(i+1);
        x[i].Chuanhoa();
    }
    sort(x,x+n,cmp);
    for(int i = 0; i < n; i++){
        x[i].in();
    }
    return 0;
}