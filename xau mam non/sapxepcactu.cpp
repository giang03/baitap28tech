#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
    return a > b;
}

int main() {
    string s;   getline(cin , s);
    vector <string> v;
    stringstream ss (s);
    string tmp;
    int k = 0;
    while(ss >> tmp){
        v.push_back(tmp);
        k++;
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
    cout << endl;
    sort(v.begin(), v.end(),cmp);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
    return 0;
}