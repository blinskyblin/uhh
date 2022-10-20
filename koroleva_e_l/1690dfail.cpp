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
        
        for (int j=0; j<=n-k;/*чтоб не выхоить за пределы потом*/ j++) {
            int p=0; //счётчик минимального кол-ва перекрашивания
            
            for (int m=0; m<k; m++) {//в каааждом возможном отрезке размером k находим p 
                if (str[j+m]=='W') {
                    p+=1;
                   std::cout<<str[j];
                }
            }
            if (p<o) {
                o=p; //запоминаем минимальное p
            }
        } 
    std::cout<<o<<"\n";
    }
    //задумка, зуб даю, правильная, дайте время докрутить её
}
