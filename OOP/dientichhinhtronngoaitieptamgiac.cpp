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

double dientich(double a, double b, double c){
    double p = (a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main(){
    int t; cin >> t;
    while(t--){
        Point a,b,c;
        a.nhap(); b.nhap(); c.nhap();
        double A,B,C;
        A = distance(a,b);
        B = distance(b,c);
        C = distance(c,a);
        if(A+B>C && A+C > B && B+C>A){
            double R = (A*B*C)/(4*dientich(A,B,C));
            cout << fixed << setprecision(3) << R*R*3.14 << endl;
        }
        else cout << "INVALID" << endl;
    }
    return 0;
}