#include <iostream> // source:  https://codeforces.com/problemset/problem/1678/A
#include <vector>
#include <algorithm>

int main()
{
    int t = 0;
    int n = 0;
    int a = 0;
    std::cin >> t;
    for (int i = 0; i < t; ++i) {
        int y = 0; // кол-во нулей в векторе
        int z = 0; // кол-во повторений в векторе
        std::vector<int> V; 
        std::cin >> n;
        for (int j = 0; j < n; ++j) {
            std::cin >> a;
            V.push_back(a);
        }
        std::sort (V.begin(), V.end());
        if (V[0] == 0) {
            y += 1;
        } // отдельно запишем, чтоб потом не выходить за пределы вектора
        for (int k = 1; k < n; ++k) {
            if (V[k] == 0) {
                y += 1;
            }
            if (V[k - 1] == V[k]) {
                z += 1;
            }
        }         
        if (y != 0) {
            std::cout << n - y << std::endl;
        }
        if (y ==0 && z != 0) { 
            std::cout << n << std::endl;
        }
        if (y == 0 && z == 0 ) { 
            std::cout << n + 1 << std::endl;
        }
    }
}
