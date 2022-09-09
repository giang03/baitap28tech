#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
    return a.size() < b.size();
}

bool tn(string s){
    int l = 0, r = s.size() - 1;
    while(l <= r){
        if(s[l] != s[r]) return 0;
        l++; r--;
    }
    return 1;
}

int main(){
    string s; getline(cin , s);
    stringstream ss(s);
    string tmp;
    vector <string> v;
    map <string , int > ma;
    while(ss >> tmp){
        if(tn(tmp) && ma[tmp] == 0){
            v.push_back(tmp);
            ma[tmp]++;
        }
    }
    stable_sort(v.begin(), v.end(),cmp);
    for(auto x : v){
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}