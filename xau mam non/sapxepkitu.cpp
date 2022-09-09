#include <bits/stdc++.h>

using namespace std;

bool cmp(char a, char b){
    return a > b;
}

int main() {
	string s; cin >> s;
    char a[s.size()];
    for(int i = 0; i < s.size(); i++){
        a[i] = s[i];
    }
    sort(a, a+ s.size());
    for(char x : a){
        cout << x ;
    }
    cout << endl;
    sort(a, a+ s.size(),cmp);
    for(char x : a){
        cout << x ;
    }
    return 0;
}