#include <bits/stdc++.h>

using namespace std;
using ll = long long ;

class Point{
private:
    double x,y;
public : 
    void nhap(){
        cin >> this->x >> this->y;
    }
    double getX(){
        return this->x;
    }
    double getY(){
        return this->y;
    }
};

double distance(Point a, Point b){
    double tmp = 0;
    tmp = sqrt(pow(a.getX() - b.getX(), 2) + pow(a.getY() - b.getY(), 2) );
    return tmp;
}

int main(){
    int t; cin >> t;
    while(t--){
        Point a,b;
        a.nhap(); b.nhap();
        cout << fixed << setprecision(4) << distance(a,b) << endl;
    }
    return 0;
}