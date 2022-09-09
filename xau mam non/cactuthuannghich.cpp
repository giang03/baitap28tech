#include <bits/stdc++.h>

using namespace std;

bool tn(string s){
    int l = 0, r = s.size() - 1;
    while(l <= r){
        if(s[l] != s[r]) return 0;
        l++; r--;
    }
    return 1;
}

int main() {
    string s;   getline(cin , s);
    multiset <string> se;
    stringstream ss (s);
    string tmp;
    while(ss >> tmp){
        if(tn(tmp))
            se.insert(tmp);
    }
    for(auto x : se){
        cout << x << ' ';
    }
    return 0;
}