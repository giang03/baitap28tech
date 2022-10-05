#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
class Person{
private:
    string ten, ngaysinh, diachi;
public:
    Person(){
        ten = ngaysinh = diachi = "";
    }
    Person(string ten, string ngaysinh, string diachi){
        this->ten = ten;
        this->ngaysinh = ngaysinh;
        this->diachi = diachi;
    }
    void chuanHoa(){
        if(ngaysinh[1] == '/') ngaysinh = "0" + ngaysinh;
        if(ngaysinh[4] == '/') ngaysinh.insert(3, "0");
        stringstream ss(ten);
        string tmp, res = "";
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
        cout << ten << ' ' << ngaysinh << ' ' << diachi << ' ';
    }
};
 
class Student : public Person{
private:
    string msv, lop;
    double gpa;
public:
    Student(string ten, string ngaysinh, string diachi, int msv, string lop, double gpa) : Person(ten, ngaysinh, diachi){
        this->msv = to_string(msv);
        while(this->msv.size() < 4)
            this->msv = "0" + this->msv;
        this->lop = lop;
        this->gpa = gpa;
    }
    void in(){
        cout << msv << ' ';
        Person::in();
        cout << lop << ' ' << fixed << setprecision(2) << gpa << endl;
    }
};
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin.ignore();
        string ten; getline(cin, ten);
        string s; getline(cin, s);
        string lop; getline(cin, lop);
        double gpa;
        cin >> gpa;
        int pos = 0;
        for(int i = 0; i < s.size(); i++){
            if(isalpha(s[i])){
                pos = i; break;
            }
        }
        string ns = s.substr(0, pos);
        string dc = s.substr(pos);
        Student st(ten, ns, dc, i + 1, lop, gpa);
        st.chuanHoa();
        st.in();
    }
}