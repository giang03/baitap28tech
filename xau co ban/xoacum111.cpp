#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    string t = "111";
    while(s.find(t) != -1){
        s.erase(s.find(t),3);
    }
    if(s.size() != 0) cout << s << endl;
    else cout << "EMPTY\n";
    return 0;
}