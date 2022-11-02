#include <iostream> // source:  https://codeforces.com/problemset/problem/1165/B
#include <vector>
#include <algorithm>

int main()
{
    int n = 0;
    int a = 0;
    int count = 0; // ответ
    int badcount = 0; //сколько скипнулось элементов вектора
    std::vector<int> v;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> a;
        v.push_back(a);
    }
    std::sort(begin(v), end(v));
    for (int j = 0; j < n; ++j) {
        if (v[j] >= j + 1 - badcount) {
            count += 1;
        }
        else {
            badcount += 1;
        }
    }
    std::cout << count;
}

