#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

#define FAST cin.tie(NULL), cout.tie(NULL), ios::sync_with_stdio(false)


int main(void) {
	FAST;
	string str;
	cin >> str;
	vector<bool> check(5);
	int cnt = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'M') {
			if (!check[0]) {
				check[0] = true;
				cnt++;
			}
		}
		else if (str[i] == 'O') {
			if (!check[1]) {
				check[1] = true;
				cnt++;
			}
		}
		else if (str[i] == 'B') {
			if (!check[2]) {
				check[2] = true;
				cnt++;
			}
		}
		else if (str[i] == 'I') {
			if (!check[3]) {
				check[3] = true;
				cnt++;
			}
		}
		else if (str[i] == 'S') {
			if (!check[4]) {
				check[4] = true;
				cnt++;
			}
		}
		if (cnt == 5)break;
	}
	if (cnt == 5) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	return 0;
}