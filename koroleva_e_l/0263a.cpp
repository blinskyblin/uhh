// https://codeforces.com/contest/263/problem/A
#include <iostream>
 
int main()
{
  
	int x;
	for (int i = 1; i <= 5; ++i) {
		for (int j = 1; j <= 5; ++j) {
			std::cin >> x;
	        if (x == 1) {
				std::cout << abs(i - 3) + abs(j - 3); }}}
}
