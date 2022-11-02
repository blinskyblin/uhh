#include <iostream> // source:  https://codeforces.com/contest/271/problem/A

int main()
{
    int y = 0;
    int a = 0; // первая цифра искомого года
    int b = 0; // вторая цифра
    int c = 0; // третья
    int d = 0; // четвёртая
    std::cin >> y;
    for (int i = y+1; i <= 10000; ++i) {  
        a = i / 1000;
        b = (i-1000*a)/100;
        c = (i - 1000 * a - 100 * b) / 10;
        d = i % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d) { //условие неравенства цифр года
        std::cout << i;
        break;
        } 
    }
}
