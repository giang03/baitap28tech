#include <bits/stdc++.h>

using namespace std;

void chuanhoaten1(vector <string> v){
    for(int i = 0 ; i < v.size() - 2 ; i++){
        cout << v[i] << ' ';
    }
    cout << v[v.size() - 2] << ", " << v[v.size() - 1];
}

void chuanhoaten2(vector <string> v){
    cout << v[v.size() - 1] << ", ";
    for(int i = 0 ; i < v.size() - 1 ; i++){
        cout << v[i] << ' ';
    }
}


int main(){
    string ten;
    getline(cin,ten);
    stringstream ss(ten);
    string tmp;
    vector <string> v;
    while(ss >> tmp){
        tmp[0] = char(toupper(tmp[0]));
        for(int i = 1; i < tmp.size(); i++){
            tmp[i] = char(tolower(tmp[i]));
        }
        v.push_back(tmp);
    }
    for(int i = 0; i < v[v.size() - 1].size(); i++){
        v[v.size() - 1][i] = char(toupper(v[v.size() - 1][i]));
    }
    chuanhoaten1(v);
    cout << endl;
    chuanhoaten2(v);
    return 0;
}