#include <bits/stdc++.h>

using namespace std;

bool check(string s){
    int l = 0, r = s.size() - 1;
    while(l <= r){
        if(s[l] != s[r]) return 0;
        l++; r--;
    }
    return 1;
}

int main(){
    string s; cin >> s;
    if(check(s)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}