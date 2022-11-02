#include <iostream> // source:  https://codeforces.com/contest/318/problem/A
#include <vector>
 
int main()
{ 
    int n = 0;
    int k = 0;
    std::cin >> n >> k;
    std::vector<int> blah;
    for (int i = 1; i <= n; i += 2) {
        blah.push_back(i); // добавляем в вектор неч числа
    }
    for (int j = 2; j <= n; j += 2) {
        blah.push_back(j); // добавляем в вектор чёт числа
    }
std::cout << blah.at(k - 1); 
// громадные числа - жуть. На них ломается код
}
