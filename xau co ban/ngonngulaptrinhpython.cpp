#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    string t = "python";
    int j = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == t[j]){
            j++;
        }
    }
    if(j == 6) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}