#include <bits/stdc++.h>

using namespace std;

//bool snt(long long n){
//	for(int i = 2; i <= sqrt(n); i++){
//		if(n%i == 0) return 0;
//	}
//	return 1;
//}
bool prime[10000001];

void sang(){
    for(int i = 0; i <= 10000000; i++)
        prime[i] = 1;
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(10000000); i++){
        if(prime[i]){
            for(int j=i*i; j<= 10000000; j+=i)
                prime[j] = 0;
        }
    }
}

bool check(long long n){
	int a = n%10;
	if(a == 9) return 1;
	n/=10;
	while(n){
		if(a < n%10) return 0;
		n/=10;
	}
	return 1;
}

int main() {
	sang();
	long long n;
	int cnt = 0;
	cin >> n;
	for(int i =2; i <= n; i++){
		if( prime[i] && check(i)){
			cout << i <<" ";
			cnt ++;
		}
	}
	cout << "\n" << cnt;
    return 0;
}

