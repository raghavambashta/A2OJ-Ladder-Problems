#include <bits/stdc++.h>
using namespace std;
 
int main() {
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	//for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
	string str, s;
	getline(cin, str);
	regex r("[AOYEUIaoyeui]");
	s = regex_replace(str, r, "");
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	string temp = "";
	int l = s.length();
	for (int i = 0 ; i < l ; i++)
	{
		if (s[i])
			temp = temp + '.' + s[i];
	}
	cout << temp;
}