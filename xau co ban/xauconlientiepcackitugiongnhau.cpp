#include <bits/stdc++.h>

using namespace std;

bool cmp(string a,string b){
    if(a.size() != b.size())    
        return a.size() < b.size();
    return a < b;
}

int main(){
    string s; cin >> s;
    vector <string> v;
    string tmp = "";
    tmp += s[0];
    for(int i = 1 ; i< s.size(); i++){
        if(s[i] == s[i-1]){
            tmp += s[i];
        }
        else{
            v.push_back(tmp);
            tmp = "";
            tmp += s[i];
        }
    }
    v.push_back(tmp);
    sort(v.begin(), v.end(),cmp);
    cout << v.back() << endl;
    return 0;
}