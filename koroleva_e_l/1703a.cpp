#include <iostream> // source:  https://codeforces.com/contest/1703/problem/A
#include <algorithm>
#include <string>

int main()
{
    int n = 0;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::string str;
        std::cin >> str;
        std::transform(str.begin(), str.end(),str.begin(), ::toupper); // преобразование строки в верхний регистр (во какую приколюху нагуглила :D)
        if (str == "YES" || str == "NO") {
            std::cout << "Yes\n";
        }
        else {
            std::cout << "No\n";
        }
    }
}
