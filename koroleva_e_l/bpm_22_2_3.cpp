#include <iostream>
#include <string>

int main()
{
    int i = 0;
    int k = 0;
    int dlina = 0;
    int ser = 0; //середина
    std::string str;
    std::string result;
    std::cin>>str;
    dlina = str.length(); 
    
    if ((dlina == 1) || (dlina == 2)) { //два первые скучные нудные случаи чур вручную
        if (dlina == 1) { 
            result+str[0];
        }
    
        if (dlina == 2) {
            result+str[0];
            result+str[1];
        } 
    }
    
    else {
        if (dlina%2==0) { //если длина str чёт
            ser = dlina/2;
            result+str[ser];
            for (i=1; i<ser-1; i++) {
                result+str[ser+i];
                result+str[ser-i];
            }
        result+str[2*ser];
        }
    
        if (dlina%2==1) { //если длина str нечёт
            ser=dlina/2+1;
            result+str[ser];
            for (i=1; i<ser-1; i++) {
                result+str[ser-i];
                result+str[ser+i];
            }
        result+str[2*ser];
        }
    }
    
    std::cout<<result;
}
