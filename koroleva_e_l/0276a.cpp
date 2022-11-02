#include <iostream> // source:  https://codeforces.com/problemset/problem/276/A
 
int main()
{
    int n = 0;    
    int k = 0;
    int fi = 0; 
    int ti = 0; 
    int h = -2147483647; // очень большое отриц. число для корректного сравнения, ответ по совместительству
    std::cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        std::cin >> fi >> ti;
        if (ti > k) {
            fi = fi - (ti - k);
        }
        if (h < fi) {
            h = fi;
        }
    }
    std::cout << h;
}
