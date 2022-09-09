#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    map <char,int> ma;
    for(int i = 0; i < s.size(); i++){
        ma[s[i]]++;
    }
    for(auto it : ma){
        cout << it.first << ' ' << it.second << endl;
    }
    cout << endl;
    for(int i = 0; i < s.size(); i++){
        if(ma[s[i]] != 0){
            cout << s[i] << ' ' <<  ma[s[i]] << endl;
            ma[s[i]] = 0;
        }
    }
    return 0;
}