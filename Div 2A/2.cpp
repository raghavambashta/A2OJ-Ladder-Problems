#include <bits/stdc++.h>
using namespace std;
 
int main() {
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	//for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	string s;
	while (t--) {
		cin >> s;
		if (s.length() <= 10)
			cout << s << endl;
		else {
			int l = s.length();
			string temp;
			temp = s[0] + to_string(l - 2) + s[l - 1];
			cout << temp << endl;
		}
	}
}