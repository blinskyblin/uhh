#include <iostream> //source:  https://codeforces.com/contest/4/problem/A

int main()
{
    int w = 0;
    std::cin >> w;
    if (w % 2 == 0 && w >= 4) {
        int x = 0;
        for (int i = 2; i + 2 <= w; i += 2) {
            if ((w-i) % 2 == 0) {
                x += 1; 
            }
        }
        if (x != 0) {
            std::cout << "YES"; 
        }
    }
    else {
        std::cout << "NO"; 
    }
}
