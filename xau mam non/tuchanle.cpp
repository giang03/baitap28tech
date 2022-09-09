#include <bits/stdc++.h>

using namespace std;

void latnguoc(string &s){
    int l = 0, r = s.size() - 1;
    while(l <= r){
        swap(s[l], s[r]);
        l++; r--;
    }
    cout << s;
}

int main() {
	string s; 
    getline(cin, s);
    vector <string> v;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    for(int i = 0 ; i < v.size() - 1; i++){
        if(i % 2 == 0){
            cout << v[i] << ' ';
        }
        else {
            latnguoc(v[i]);
            cout << ' ';
        }
    }
    if(v.size() % 2 != 0){
        cout << v[v.size() - 1];
    }
    else 
        latnguoc(v[v.size() - 1]);
    return 0;
}