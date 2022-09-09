#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; getline(cin , s);
    stringstream ss(s);
    string tmp;
    map <string , int > ma;
    string a,b;
    int MAX = INT_MIN, MIN = INT_MAX;
    while(ss >> tmp){
        ma[tmp]++;
    }
    for(auto x : ma){
        MAX = max(MAX, ma[x.first]);
        MIN = min(MIN, ma[x.first]);
    }
    for(auto x : ma){
        if(x.second == MAX){
            a = x.first;
        }
        if(x.second == MIN){
            b = x.first;
        }
    }
    cout << a << ' ' << MAX << endl;
    cout << b << ' ' << MIN << endl;
    return 0;
}