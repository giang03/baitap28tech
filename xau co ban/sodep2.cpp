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

bool check(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '6') return 1;
    }
    return 0;
}

int main(){
    string s; cin >> s;
    if(tn(s) && check(s)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}