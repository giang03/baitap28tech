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
    string getMa(){
        return this->ma;
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
    double getGpa(){
        return this->gpa;
    }
};

class Teacher : public Person{
private:
    string khoa;
    ll luong;
public : 
    void nhap(string ma){
        Person :: nhap(ma);
        getline(cin,khoa);
        cin >> this->luong;
    }
    void in(){
        Person :: in();
        cout << this->khoa << ' ' << this->luong << endl;   
    }
    ll getLuong(){
        return this->luong;
    }
};

bool cmp1(Student a, Student b){
    if(a.getGpa() != b.getGpa())
        return a.getGpa() > b.getGpa();
    return a.getMa() < b.getMa();
}

bool cmp2(Teacher a, Teacher b){
    if(a.getLuong() != b.getLuong())
        return a.getLuong() > b.getLuong();
    return a.getMa() < b.getMa();
}


int main(){
    int n; cin >> n;
    vector <Student> s;
    vector <Teacher> t;
    for(int i = 0; i < n; i++){
        string ma;
        cin.ignore();
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
    sort(t.begin(),t.end(),cmp2);
    sort(s.begin(),s.end(),cmp1);
    cout << "DANH SACH GIAO VIEN :" << endl;
    for(int i = 0; i < t.size(); i++){
        t[i].in();
    }
    cout << "DANH SACH SINH VIEN :" << endl;
    for(int i = 0; i < s.size(); i++){
        s[i].in();
    }
    return 0;
}