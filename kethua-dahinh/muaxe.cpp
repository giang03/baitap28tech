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
    cin.ignore();
    ll a,b; cin >> a >> b;
    cout << "DANH SACH OTO :" << endl;
    for(int i = 0; i < ot.size(); i++){
        if(ot[i].getGia() >= a &&  ot[i].getGia() <= b)
            ot[i].in();
    }
    cout << "DANH SACH XE MAY :" << endl;
    for(int i = 0; i < xm.size(); i++){
        if(xm[i].getGia() >= a &&  xm[i].getGia() <= b)
            xm[i].in();
    }
    return 0;
}