#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; getline(cin, s);
    int chu = 0, so = 0 , kitu = 0;
    for(int i = 0; i < s.size(); i++){
        s[i] = (char)tolower(s[i]);
        if(isdigit(s[i])) so++;
        else if(s[i] >= 'a' && s[i] <= 'z') chu++;
        else kitu++;
    }
    cout << chu << ' ' << so <<' ' << kitu << endl;
    return 0;
}