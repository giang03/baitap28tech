#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool cmp(pair <int,int> a, pair <int,int> b){
	if(a.second != b.second)	
		return a.second > b.second;
	else return a.first < b.first;
}
bool cmp1(pair <int,int> a, pair <int,int> b){	
	return a.second > b.second;
}

int main() {
	int n; cin >> n;
	int a[n];
	map <int, int> mp;
	for(int &x : a){
		cin >> x;
		mp[x]++;
	}
	int k = mp.size();
	pair <int,int> pa1[k],pa2[k];
	int l = 0;
	for(auto it : mp){
		pa1[l].first = it.first;
		pa1[l].second = it.second;
		l++;
	}
	sort(pa1,pa1+k,cmp);
	for(auto it : pa1){
		for(int i = 0; i < it.second; i++)
			cout << it.first <<" ";
	}
	cout << endl;
	int m = 0;
	for(int i = 0; i < n; i++){
		if(mp[a[i]] != 0){
			pa2[m].first = a[i];
			pa2[m].second = mp[a[i]];
			mp[a[i]] = 0;
			m++;
		}
	}
	stable_sort(pa2,pa2+k,cmp1);
	for(auto it : pa2){
		for(int i = 0; i < it.second; i++)
			cout << it.first << " ";
	}
    return 0;
}

