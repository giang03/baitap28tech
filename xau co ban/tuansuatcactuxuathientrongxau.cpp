#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; getline(cin , s);
    stringstream ss(s);
    string tmp;
    vector <string> v;
    map <string , int > ma;
    while(ss >> tmp){
        if(ma[tmp] == 0){
            v.push_back(tmp);
        }
        ma[tmp]++;
    }
    for(auto x : ma){
        cout << x.first << ' ' << x.second << endl;
    }
    cout << endl;
    for(auto x : v){
        cout << x << ' ' << ma[x] << endl;
    }
    return 0;
}