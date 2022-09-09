#include <bits/stdc++.h>

using namespace std;

map <string,int> ma;

void chuanhoaemail(vector <string> v){
    string s = v[v.size() - 2];
    for(int i = 0; i < v.size()- 2; i++){
        s += v[i][0];
    }
    if(ma[s] == 0){
        cout << s;
    }
    else {
        cout << s << ma[s] + 1;
    }
    ma[s]++;
    cout << "@xyz.edu.vn" << endl;
}

void chuanhoans(string s){
    stringstream ss(s);
    string tmp;
    while(getline(ss,tmp,'/')){
        if(tmp[0] == '0'){
            tmp.erase(0,1);
        }
        cout << tmp;
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s; getline(cin, s);
        stringstream ss(s);
        string tmp;
        vector <string> v;
        while(ss >> tmp){
            for(int i = 0; i < tmp.size(); i++){
                tmp[i] = char(tolower(tmp[i]));
            }
            v.push_back(tmp);
        }
        chuanhoaemail(v);
        chuanhoans(v.back());
    }
    return 0;
}