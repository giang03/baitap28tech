#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        s[i] = (char)toupper(s[i]);
        cout << s[i];
    }
    cout << endl;
    for(int i = 0; i < s.size(); i++){
        s[i] = (char)tolower(s[i]);
        cout << s[i];
    }
    cout << endl;
    return 0;
}