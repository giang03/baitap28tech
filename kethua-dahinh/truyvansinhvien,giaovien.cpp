#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;

class Person{
private:
    string ma,ten,ngaysinh,diachi;
public :
    void nhap(string ma){
        this->ma = ma;
        getline(cin,this->ten);
        getline(cin, this->ngaysinh);
        getline(cin,this->diachi);
    }
    void Chuanhoa(){
        if(ngaysinh[2] != '/') ngaysinh = "0" + ngaysinh;
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
        cout << this->ma << ' ' << this->ten << ' ' << this->ngaysinh << ' ' << this->diachi << ' ';
    }
    string getDiachi(){
        return this->diachi;
    }
};

class Student : public Person{
private:
    string lop;
    double gpa;
public : 
    void nhap(string ma){
        Person :: nhap(ma);
        cin >> this->lop >> this->gpa;
    }
    void in(){
        Person :: in();
        cout << this->lop << ' '  << fixed << setprecision(2) << this->gpa << endl;   
    }
};

class Teacher : public Person{
private:
    string khoa,luong,lop;
public : 
    void nhap(string ma){
        Person :: nhap(ma);
        getline(cin,khoa);
        cin >> this->luong >> this->lop;
    }
    void in(){
        Person :: in();
        cout << this->khoa << ' ' << this->luong << endl;   
    }
};


int main(){
    int n; cin >> n;
    vector <Student> s;
    vector <Teacher> t;
    for(int i = 0; i < n; i++){
        cin.ignore();
        string ma;
        getline(cin,ma);
        string tmp = "";
        for(int i = 0; i < 2; i++){
            tmp += ma[i];
        }
        if(tmp == "GV"){
            Teacher x;
            x.nhap(ma);
            x.Chuanhoa();
            t.push_back(x);
        }
        if(tmp == "SV"){
            Student x;
            x.nhap(ma);
            x.Chuanhoa();
            s.push_back(x);
        }
    }
    cin.ignore();
    string tmp; getline(cin,tmp);
    cout << "DANH SACH GIAO VIEN CO DIA CHI TAI " << tmp << " :" << endl;
    for(int i = 0; i < t.size(); i++){
        if(t[i].getDiachi() == tmp){
            t[i].in();
        }
    }
    cout << "DANH SACH SINH VIEN CO DIA CHI TAI " << tmp << " :" << endl;
    for(int i = 0; i < s.size(); i++){
        if(s[i].getDiachi() == tmp){
            s[i].in();
        }
    }
    return 0;
}