#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    string tmp = "";
    for(int i = 0; i< s.size(); i++){
        if(s[i] == '4'){
            tmp += "223";
        }
        else if(s[i] == '6'){
            tmp += "35";
        }
        else if(s[i] == '8'){
            tmp += "2227";
        }
        else if(s[i] == '9'){
            tmp += "2337";
        }
        else if(s[i] != '0' && s[i] != '1'){
            tmp += s[i];
        }
    }
    sort(tmp.begin(),tmp.end(),greater<char>());
    cout << tmp << endl;
    return 0;
}
