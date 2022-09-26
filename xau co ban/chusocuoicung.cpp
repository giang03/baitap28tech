#include <bits/stdc++.h>
using namespace std;

int path[4] = {6,2,4,8};

int main(){
    string n; cin >> n;
    int r = 0;
    for(int i = 0; i < n.size(); i++){
        r = r*10 + n[i] -  '0';
        r %= 4;
    }
    cout << path[r*3 % 4] << endl;
    return 0;
}
