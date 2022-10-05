#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;

class Vehicle{
private : 
    string ma,ten,hang,mau;
public :
    void nhap(string ma){
        this->ma = ma;
        getline(cin,this->ten);
        getline(cin,this->hang);
        getline(cin,this->mau);
    }
    void in(){
        cout << ma << ' ' << ten << ' ' << hang << ' ' << mau << ' ';
    }
    string getMa(){
        return this->ma;
    }
};

class Oto : public Vehicle{
private :
    ll maluc, giaban;
public :
    void nhap(string ma){
        Vehicle :: nhap(ma);
        cin >> maluc >> giaban;
    }
    void in(){
        Vehicle :: in();
        cout << maluc << ' ' << giaban << endl;
    }
    ll getGia(){
        return this->giaban;
    }
};

class Xemay : public Vehicle{
private :
    ll tocdo,giaban;
public :
    void nhap(string ma){
        Vehicle :: nhap(ma);
        cin >> tocdo >> giaban;
    }
    void in(){
        Vehicle :: in();
        cout << tocdo << ' ' << giaban << endl;
    }
    ll getGia(){
        return this->giaban;
    }
};

bool cmp1(Oto a, Oto b){
    if(a.getGia() != b.getGia())
        return a.getGia() > b.getGia();
    return a.getMa() < b.getMa();
}

bool cmp2(Xemay a, Xemay b){
    if(a.getGia() != b.getGia())
        return a.getGia() > b.getGia();
    return a.getMa() < b.getMa();
}

int main(){
    int n; cin >> n;
    vector <Oto> ot;
    vector <Xemay> xm;
    for(int i = 0; i < n; i++){
        cin.ignore();
        string ma;
        getline(cin,ma);
        string tmp = "";
        for(int i = 0; i < 3; i++){
            tmp += ma[i];
        }
        if(tmp == "OTO"){
            Oto x;
            x.nhap(ma);
            ot.push_back(x);
        }
        else {
            Xemay x;
            x.nhap(ma);
            xm.push_back(x);
        }
    }
    sort(ot.begin(),ot.end(),cmp1);
    sort(xm.begin(),xm.end(),cmp2);
    cout << "DANH SACH OTO :" << endl;
    for(int i = 0; i < ot.size(); i++){
        ot[i].in();
    }
    cout << "DANH SACH XE MAY :" << endl;
    for(int i = 0; i < xm.size(); i++){
        xm[i].in();
    }
    return 0;
}