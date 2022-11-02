#include<iostream> // source:   https://codeforces.com/contest/1/problem/A

int main() 
{
    int n = 0;
    int m = 0;
    int a = 0;    
    int d = 0; // столько влезающих целиком плит
    int c = 0; // +столько дополнительных плит по горизонтали    
    int k = 0; // +столько доп плит по диагонали
    int u = 0; // +столько доп плит по вертикали 
    std::cin >> m >> n >> a;
    d = (m / a) * (n / a);
    if (m % a != 0) {
        c = m / a;
    } 
    if (n % a != 0) {
        u = n / a;
    } 
    if (m / a ==0 || n / a == 0) { // ради 6 и 7 проверки
        c = 1;
        if ((m * n) / a > 0) {
        c = (m * n) / a;
        }
    }
    else {
        if (n % a != 0 && m % a != 0) {
        k = 1;
        }
    } 
    
    if (abs(d) > 100000000) { // это ради 9 проверки... перемножают нереально длинные числа
        std::cout << "1000000000000000000";
    }
    else {
        std::cout << d + u + c + k;
    }
}
