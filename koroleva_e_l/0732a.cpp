#include <iostream> // source:  https://codeforces.com/problemset/problem/732/A

int main()
{
    int k = 0;
    int r = 0;
    int sum = 0;
    int c = 1; //начальное кол-во лопат
    std::cin >> k >> r;
    sum = k;
    while ((sum % 10 != 0) && (sum % 10 != r)) { //непонятно как с for делать, так что уот
        c += 1;
        sum += k;
    }
    std::cout << c;
}
