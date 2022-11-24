#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s;
    set <string> se;
    while(cin >> s){
        se.insert(s);
    }
    cout << se.size() << endl;
    cout << *se.begin() << ' ' << *se.rbegin() << endl;
    return 0;
}