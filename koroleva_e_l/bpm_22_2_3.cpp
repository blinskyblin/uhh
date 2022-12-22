#include <iostream>
#include <string>
#include <vector>
int main()
{
    int i = 0;
    int k = 0;
    int dlina = 0;
    int ser = 0; //середина
    std::string str;
    std::cin >> str;
    dlina = str.length();
    std::vector<char> result;
    
    
    if ((dlina == 1) || (dlina == 2)) { //два первые скучные случаи чур вручную
        if (dlina == 1) { 
            result.push_back(str[0]);
        }
    
        if (dlina == 2) {
            result.push_back(str[0]);
            result.push_back(str[1]);
        } 
    }
    
    else {
        if (dlina % 2 == 0) { //если длина str чёт
            ser = dlina / 2 - 1; //именно индекс
            result.push_back(str[ser]);
            for (i = 1; i <= ser; i++) {
                result.push_back(str[ser + i]);
                result.push_back(str[ser - i]);
            }
        result.push_back(str[dlina-1]);
        }
    
        if (dlina % 2 == 1) { //если длина str нечёт
            ser = dlina / 2 ;
            result.push_back(str[ser]);
            for (i = 1; i <= ser; i++) {
                result.push_back(str[ser - i]);
                result.push_back(str[ser + i]);
            }
        }
    }
    
    for (k = 0; k < dlina; k++) {
        std::cout << result[k];
    }
}
