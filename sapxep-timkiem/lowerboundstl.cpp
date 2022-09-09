#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    multiset <int> se;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    int q; cin >> q;
    while(q--){
        int x; cin >> x;
        if(se.find(x) != se.end()){
            cout << "Yes " << endl;
        }
        else {
            cout << "No " << endl;
        }
    }
    return 0;
}