#include <bits/stdc++.h>

using namespace std;


int main() {
	string s;
    getline(cin , s);
    stringstream ss(s);
    string tmp;
    int dem = 0;
    while(ss >> tmp){
        for(int i = 0; i < tmp.size(); i++){
            tmp[i] = (char)tolower(tmp[i]);
        }
        if(tmp == "28tech") dem++;
    }
    cout << dem << endl;
    return 0;
}