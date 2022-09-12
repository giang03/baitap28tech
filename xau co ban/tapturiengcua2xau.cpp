#include <bits/stdc++.h>

using namespace std;

int main(){
    string s,t; getline(cin,s); getline(cin,t);
    stringstream ss1(s);
    string tmp;
    map <string,int> ma;
    while(ss1 >> tmp){
        for(int i = 0; i < tmp.size(); i++){
            tmp[i] = char(tolower(tmp[i]));
        }
        ma[tmp] = 1;
    }
    stringstream ss2(t);
    while(ss2 >> tmp){
        for(int i = 0; i < tmp.size(); i++){
            tmp[i] = char(tolower(tmp[i]));
        }
        ma[tmp] = 2;
    }
    for(auto x : ma){
        if(x.second == 1){
            cout << x.first << ' ';
        }
    }
    return 0;
}