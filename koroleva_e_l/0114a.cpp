#include <iostream>  // https://codeforces.com/problemset/problem/114/A
#include <cmath>

int main()
{
    long long k=0;
    long long l=0;
    int a=0;
    int b=0;
    std::cin>>k>>l;
    a=(std::log(l)/std::log(k)); //в какую округлённую степень возвести k, чтоб получить l
    b=pow(k,a); //k в округлённой степени
    if(b==l) {
        std::cout << "YES" << '\n' << a-1;     
    }
    else {
        std::cout << "NO";
    }
}
//не работает на больших числах...
