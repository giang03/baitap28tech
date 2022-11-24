#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string s;
bool ok;

void khoitao(){
    cin >> s;
}

void sinh(){
    int i = s.size() - 1;
    while(i >= 0 && s[i] >= s[i+1]) i--;
    if(i < 0) ok = 0;
    else{
        int j = s.size() - 1;
        while(s[i] >= s[j]) j--;
        swap(s[i],s[j]);
        reverse(s.begin() + i + 1, s.end());
    }
}

int main(){
    ok = 1;
    khoitao();
    sinh();
    if(ok){
        cout << s << endl;
    }
    else {
        cout << "NOT EXIST" << endl;
    }
    return 0;
}