#include <bits/stdc++.h>

using namespace std;


int main(){
    string s; getline(cin , s);
    int cnt = 0;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}