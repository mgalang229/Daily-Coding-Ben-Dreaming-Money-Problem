// Using C++ by: jasonpogi
#include <bits/stdc++.h>

using namespace std;

void decode(){
	int c, n, ex, s = 0;
	cin >> c >> n;
	double per = 60;
	per /= 100;
	per *= c;
	while(n--){
		cin >> ex;
		s += ex;
	}
	if(s > c){
		cout << "BANKRUPT";
	} else if(s > per){
		cout << "BAD!";
	} else{
		cout << "GOOD!";
	}
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		decode();
	}
	return 0;
}