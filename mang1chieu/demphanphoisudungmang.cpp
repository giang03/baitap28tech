#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

void swap(int &a, int &b){
	int tmp = a;
	a = b; 
	b = tmp;
}

int main() {
	int n; cin >> n;
	int cnt[1001] = {0} ;
	vector <int> v(n);
	for(int &x : v){
		cin >> x;
		cnt[x]++; // dem tan suat xuat hien cua gia tri x
	}
	// gia tri va tan suat theo thu tu xuat hien
	for(int i = 0; i < v.size(); i++){
		int ok = 1;
		for(int j = 0; j < i; j++){
			if(v[i] == v[j]){
				ok = 0;
				break;
			}
		}
		if(ok){
			cout << v[i] << " " << cnt[v[i]] << endl;
		}
	}
	cout << endl;
	// gia tri va tan suat tu nho toi lon
	for(int i = 0; i < v.size(); i++){
		for(int j = i + 1; j < v.size(); j++){
			if(v[i] > v[j]) swap(v[i],v[j]);
		}
	}
	for(int i = 0; i < v.size(); i++){
		int ok = 1;
		for(int j = 0; j < i; j++){
			if(v[i] == v[j]){
			ok = 0;
			break;
			}
		}
		if(ok){
			cout << v[i] << " " << cnt[v[i]] << endl;
		}
	}
	cout << endl;
	// so co tan so xuat hien nhieu nhat va lon nhat
	int ansmax = v[0], ansmin = v[0];
	for(int i = 0; i< v.size(); i++){
		if(cnt[ansmax] <= cnt[v[i]]){
			ansmax = v[i];
		}
		if(cnt[ansmin] > cnt[v[i]]){
			ansmin = v[i];
		}
	}
	cout << ansmax << endl << ansmin << endl;
    return 0;
}

