#include <bits/stdc++.h>

using namespace std;

void chuanhoaten(string s){
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        tmp[0] = char(toupper(tmp[0]));
        for(int i = 1; i < tmp.size(); i++){
            tmp[i] = char(tolower(tmp[i]));
        }
        cout << tmp << ' ';
    }
}

void chuanhoans(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i + 1] == '/' && isdigit(s[i-1]) == 0){
            cout << '0';
        }
        cout << s[i];
    }
}

int main(){
    string ten,ns;
    getline(cin,ten);
    getline(cin,ns);
    chuanhoaten(ten); cout << endl;
    chuanhoans(ns);
    return 0;
}