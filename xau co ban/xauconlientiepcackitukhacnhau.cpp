#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
    if(a.size() != b.size())
        return a.size() < b.size();
    return a < b;
}

int main(){
    string s; cin >> s;
    vector <string> v;
    for(int i = 1; i < s.size(); i++){
        string tmp= s[i-1];
        if(s[i] != s[i-1]){
            tmp += s[i];
        }
    }
    sort(v.begin(),v.end(),cmp);
    cout << v.back() << endl;
    return 0;
}