#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2; cin >> s1 >> s2;
    map <char, int> xau1,xau2;
    for(int i = 0; i < s1.length(); i++){
        xau1[s1[i]] = 1;
    }
    for(int i = 0; i < s2.length(); i++){
        xau2[s2[i]] = 2;
    }
    for(int i = 0; i < 256; i++){
        if(xau1[char(i)] == 1 && xau2[char(i)] != 2){
            cout << char(i);
        }
    }
    cout << endl;
    for(int i = 0; i < 256; i++){
        if(xau1[char(i)] != 1 && xau2[char(i)] == 2){
            cout << char(i);
        }
    }
    return 0;
}