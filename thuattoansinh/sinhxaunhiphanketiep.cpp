#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void sinh(string s){
    int i = s.size() - 1;
    while(i >= 0 && s[i] == '1'){
        i--;
    }
    if(i < 0){
        for(int j = 0; j < s.size(); j++){
            cout << '0';
        }
        return;
    }
    else {
        s[i] = '1';
        for(int j = i + 1; j < s.size();j++){
            s[j] = '0';
        }
        for(int j = 0; j < s.size(); j++){
            cout << s[j];
        }
    }
}

int main(){
    string s; cin >> s;
    sinh(s);
    return 0;
}