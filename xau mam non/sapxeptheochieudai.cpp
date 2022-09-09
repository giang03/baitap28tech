#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
    if(a.size() != b.size())
        return a.size() < b.size();
    else return a < b;
}

int main() {
    string s;   getline(cin , s);
    vector <string> v;
    stringstream ss (s);
    string tmp;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(),cmp);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
    return 0;
}