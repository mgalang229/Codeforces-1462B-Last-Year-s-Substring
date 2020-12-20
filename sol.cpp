#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	/* 
	 * here are the positions that we need to check:
	 * check if s[n-3]+s[n-2]+s[n-1]+s[n] = "2020", simply, last four letters
	 * check if s[1]+s[n-2]+s[n-1]+s[n] = "2020", simply, first one letter + last three letters
	 * check if s[1]+s[2]+s[n-1]+s[n] = "2020", simply first two letters + last two letters
	 * check if s[1]+s[2]+s[3]+s[n] = "2020", simply, first three letters + last letter
	 * check if s[1]+s[2]+s[3]+s[4] = "2020", simply, the first four letters
	 * 
	 * */
	for(int i=0; i<=4; ++i)
		if(s.substr(0, i)+s.substr(n-4+i, 4-i)=="2020") {
			cout << "YES\n";
			return;
		}
	cout << "NO\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
