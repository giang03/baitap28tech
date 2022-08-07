#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void vitri(vector <int> v){
	int min = INT_MAX, max = INT_MIN , idmin = 0, idmax = 0;
	for(int i = 0; i < v.size(); i++){
		if(v[i] <= min){
			min = v[i];
			idmin = i;
		}
		if(v[i] > max){
			max = v[i];
			idmax = i;
		}
	}
	cout << idmin <<" " << idmax << endl;
}

int main() {
	int n; cin >> n;
	vector <int> v(n);
	for(int &x : v) cin >> x;
	vitri(v);
    return 0;
}

