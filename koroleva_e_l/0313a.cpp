#include <iostream> // source:  https://codeforces.com/contest/313/problem/A

int main()
{
	int n = 0;
	std::cin >> n;
	if (n >= 0) {
		std::cout << n;
	}
	else {
		n =- n; // для упрощения понимания (неразберихи со знаками)
		if ((n / 100) * 10 + n % 10 < n / 10) {
			std::cout << - ((n / 100) * 10 + n % 10);
		}
		else {
			std::cout << - n / 10;
		}
	}
}
