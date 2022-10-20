#include <iostream> //https://codeforces.com/problemset/problem/1690/D
#include <string>
int main()
{
    int t=0;
    std::cin>>t;
    for (int i=0; i<t; i++) {
        int n=0; //size
        int k=0; //размер отрезка
        int o=99999999; //ответ
        std::string str;
        std::cin>>n>>k>>str;
        int p=0; //счётчик минимального кол-ва перекрашивания
        
        for (int j=0; j<n; j++) { //находм минимальное p 
            if (str[j]=='B' && j>=k) {
                p-=1;}
            if (str[j]=='W') {
                p+=1;}
            if (j>=k&&p<o) {
            o=p;//запоминаем минимальное p после того, как найдём p на первом отрезке
            } 
        } 
    std::cout<<o<<"\n";
    }
} //должно работать в теории (на практике нет)
