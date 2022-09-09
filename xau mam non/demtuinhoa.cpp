#include <bits/stdc++.h>

using namespace std;


int main() {
	string s;
    getline(cin,s);
    stringstream ss(s);
    string tmp;
    int dem = 0;
    while(ss >> tmp){
        int ok = 1;
        for(int i = 0; i < tmp.size(); i++){
            if(islower(tmp[i])){
                ok = 0;
                break;
            }
        }
        if(ok) dem++;
    }    
    cout << dem << endl;
    return 0;
}