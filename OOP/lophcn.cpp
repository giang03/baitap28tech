#include <bits/stdc++.h>

using namespace std;
using ll = long long ;

class HCN{
private:
    double dai,rong;
    string mau;
public : 
    void nhap(double a, double b){
        this->dai = a;
        this->rong = b;
        cin >> this->mau;
        this->mau[0] = toupper(this->mau[0]);
        for(int i = 1; i < this->mau.size(); i++){
            this->mau[i] = tolower(this->mau[i]);
        }
    }
    int getHeight(){
        return (int)this->dai;
    }
    int getWidth(){
        return (int)this->rong;
    }
    void in(){
        cout << (this->dai+this->rong)*2 << ' ' << this->dai*this->rong << ' ' << this->mau << endl;
    }
};

int main(){
    HCN x;
    double a, b;
    cin >> a >> b;
    x.nhap(a,b);
    if(x.getHeight() == a && x.getWidth() == b && x.getHeight() > 0 && x.getWidth() > 0){
        x.in();
    }
    else cout << "INVALID" << endl;
    return 0;
}