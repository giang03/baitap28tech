#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;   getline(cin , s);
    set <string> se;
    stringstream ss (s);
    string tmp;
    while(ss >> tmp){
        for(int i = 0; i < tmp.size(); i++){
            tmp[i]= (char)tolower(tmp[i]);
        }
        se.insert(tmp);
    }
    cout << se.size() << endl;
    return 0;
}