#include <bits/stdc++.h>

using namespace std;

bool kgiam(string s){
    for(int i = 1; i < s.size(); i++){
        if(s[i] > s[i-1]) return 0;
    }
    return 1;
}

bool ktang(string s){
    for(int i = 1; i < s.size(); i++){
        if(s[i] < s[i-1]) return 0;
    }
    return 1;
}

int main(){
    string s; cin >> s;
    if(kgiam(s) || ktang(s)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}