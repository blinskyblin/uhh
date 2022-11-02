#include <iostream> //source:  https://codeforces.com/contest/263/problem/A
 
int main()
{
    int x = 0;
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            std::cin >> x;
            if (x == 1) {
                std::cout << abs(i - 3) + abs(j - 3); 
            }
        }
    }
}
