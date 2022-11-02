#include <iostream> // source:  https://codeforces.com/problemset/problem/1690/D
#include <string>

int main()
{
    int t = 0;
    std::cin >> t;
    for (int i = 0; i < t; ++i) {
        int n = 0; 
        int k = 0; 
        std::string str;
        int o = 9998999; // ответ (такой страшный для корректного сравнения)
        int p = 0; // счётчик минимального кол-ва перекрашивания
        std::cin >> n >> k >> str;
        for (int m = 0; m < k; ++m) {//считаем p на первом отрезке
            if (str[m] == 'W') {
                p += 1;
            }/*...почему в этом цикле p есть и работает, если вводить 1 5 5 BBWBW*/
            o=p; /*так надо. хз почему*/
        }
        /*...тут выводится правильный существующий p*/
        for (int j = k; j < n; ++j) { //находим минимальное p 
            /*...а в этом цикле он резко пропадает????*/
            if (str[j] == 'B' && str[j - k] == 'W') {
                p -= 1;
            }
            if (str[j] == 'W' && str [j - k] == 'B') {
                p += 1;
            }
            if (p < o) {
            o = p;//запоминаем минимальное p после того, как найдём p на первом отрезке
            } 
        }
        std::cout << o << "\n";
    }
}
