#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2; cin >> s1 >> s2;
    set <char> hop;
    map <char, int> giao;
    for(int i = 0; i < s1.length(); i++){
        hop.insert(s1[i]);
        giao[s1[i]] = 1;
    }
    for(int i = 0; i < s2.length(); i++){
        hop.insert(s2[i]);
        if(giao[s2[i]] == 1){
            giao[s2[i]] = 2;
        }
    }
    for(auto x : giao){
        if(x.second == 2){
            cout << x.first;
        }
    }
    cout << endl;
    for(auto x : hop){
        cout << x;
    }
    return 0;
}