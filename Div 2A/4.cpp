#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	//for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	int l1 = s1.length(), l2 = s2.length();
	int counter = 0;
	int i;
	if (l1 <= l2)
		i = l1;
	else if (l1 > l2)
		i = l2;
	for (i = 0; i < l1; i++) {
		if (s1[i] < s2[i]) {
			counter = -1;
			break;
		}
		if (s1[i] > s2[i]) {
			counter = 1;
			break;
		}
	}
	if (counter == 0 && l1 != l2) {
		if (l1 < l2)
			counter = -1;
		else if (l1 > l2)
			counter = 1;
	}
	cout << counter;
}