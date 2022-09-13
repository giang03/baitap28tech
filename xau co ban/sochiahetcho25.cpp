#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    int n = s.size();
    int res = s[n-1]-'0' + (s[n-2] -'0')*10;
    if(res == 0 || res %25 == 0 || s =="0") cout << "YES\n";
    else cout << "NO\n";
    return 0;
}