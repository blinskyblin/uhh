#include <iostream> //https://codeforces.com/problemset/problem/1690/D
#include <string>
int main()
{
    int t=0;
    std::cin>>t;
    for (int i=0; i<t; i++) {
        int n=0; //size
        int k=0; //размер отрезка
        int o=9998999; //ответ
        std::string str;
        std::cin>>n>>k>>str;
        int p=0; //счётчик минимального кол-ва перекрашивания
        
        for (int m=0; m<k; m++) {//считаем p на первом отрезке
            if (str[m]=='W') {
                p+=1;}/*...почему в этом цикле p есть и работает*/
        o=p;}
        /*...тут выводится правильный существующий p*/
        for (int j=k; j<n; j++) { //находим минимальное p 
            /*...а в этом цикле он резко пропадает????*/
            if (str[j]=='B' && str[j-k]=='W') {
                p-=1;}
            if (str[j]=='W' && str [j-k]=='B') {
                p+=1;}
            
            if (p<o) {
            o=p;//запоминаем минимальное p после того, как найдём p на первом отрезке
            } 
        }
    std::cout<<o<<"\n";
    }
}
