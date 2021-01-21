#include <bits/stdc++.h>
using namespace std;
 
int main() {
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	//for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	int l = s.length();
	string temp = "";
	for (int i = 0; i < l; i++) {
		if (s[i] != '+') {
			temp += s[i];
		}
	}
	sort(temp.begin(), temp.end());
	l = temp.length();
	string ans = "";
	ans += temp[0];
	int l1 = temp.length();
	for (int i = 1 ; i < l1 ; i++)
	{
		if (temp[i])
			ans = ans + '+' + temp[i];
	}
	cout << ans;
}