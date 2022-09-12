#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
    if(a.size() != b.size())
        return a.size() < b.size();
    return a < b;
}

int main(){
    string s; cin >> s;
    for(int i = 0; i < s.size();i++){
        if(isalpha(s[i])){
            s[i] = ' ';
        }
    }
    stringstream ss(s);
    string tmp;
    vector <string> v;
    while(ss >> tmp){
        int cnt = 0;
        for(int i = 0; i < tmp.size(); ++i)
        {
        if(tmp[i] == '0') cnt++;
        else break;
        }
        if(cnt == tmp.size()) tmp = "0";
        else if(cnt != 0) tmp.erase(0,cnt);
        v.push_back(tmp);
    }
    sort(v.begin(),v.end(),cmp);
    cout << v.back() << endl;
    return 0;
}