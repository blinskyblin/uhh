#include <iostream> // source:  https://codeforces.com/problemset/problem/935/B
#include <string>

int main() {	
  int n = 0;	
  std::string S;
	int x = 0; // координата х
	int y = 0; // координата у
	int d = 0; // деньги
	std::cin >> n;
	std::cin >> S;
	for (int i = 0; i < n; ++i) {
		if (S[i] == 'R') {
			x += 1;
		}
		if (S[i] == 'U') {
			y += 1;
		}
		if (x == y && S[i] == S[i + 1]) {//это если не развернулся, а прошёл через ворота
			d += 1;
		}
	}
	std::cout<<d;
}
