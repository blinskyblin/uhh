#include <iostream> // source:  https://codeforces.com/problemset/problem/723/A
#include <algorithm>
 
int main()
{
    int x1 = 0;
    int x2 = 0;
    int x3 = 0;
    std::cin >> x1 >> x2 >> x3;
    std::cout << std::max(x1, std::max(x2, x3)) - std::min(x1, std::min(x2, x3));
}

