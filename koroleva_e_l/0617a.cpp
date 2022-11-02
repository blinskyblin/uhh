#include <iostream> // source:  https://codeforces.com/contest/617/problem/A
 
int main()
{
    int x = 0;
    std::cin >> x;
    int i = (x / 5);
    if (x % 5 != 0) {
        std::cout << i + 1; 
    }
    else {
        std::cout << i;
    }
}
