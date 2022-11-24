#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string s="";
bool ok;

void khoitao(){
    string tmp;
    cin >> tmp;
    set <char> se;
    for(char x : tmp) se.insert(x);
    for(char x : se) s+=x;
}

void sinh(){
    int i = s.size() - 1;
    while(i >= 0 && s[i] > s[i+1]){
        i--;
    }
    if(i < 0) ok = 0;
    else {
        int j = s.size() - 1;
        while(s[i] > s[j]) j--;
        swap(s[i],s[j]);
        reverse(s.begin() + i + 1, s.end());
    }
}

int main(){
    khoitao();
    ok =1;
    while(ok){
        cout << s << endl;
        sinh();
    }
    return 0;
}