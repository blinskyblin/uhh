#include <iostream> // source:  https://codeforces.com/problemset/problem/886/B
#include <vector>
#include <algorithm>

int main()
{
    int n = 0;
    int ai = 0;
    std::vector<int> v;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> ai;
        for (int j = 0; j < n; ++j) {
            if (v[j] == ai) {
                v.erase(std::find(v.begin(), v.end(), ai));
                break;
            }
        }
        v.push_back(ai);
    }
    std::cout << v[0];
}

