#include <bits/stdc++.h>

using namespace std;


int main(){
    string s; getline(cin , s);
    stringstream ss(s);
    string tmp;
    map <string,int> ma;
    vector <string> v;
    while(ss >> tmp){
        ma[tmp]++;
        v.push_back(tmp);
    }
    int k = 1;
    for(auto x : ma){
        if(k != ma.size()){
            cout << x.first << ' ';
        }
        else {
            cout << x.first;
        }
    }
    cout << endl;
    for(int i = 0; i < v.size();i++){
        if(ma[v[i]] != 0){
            if(i != v.size() - 1){
                cout << v[i] << ' ';
            }
            else cout << v[i];
            ma[v[i]] = 0;
        }
    }
    return 0;
}