#include <iostream> //https://codeforces.com/problemset/problem/1512/B
 
int main()
{
    int t=0;
    int n=0;
    int i=0;
    int j=0;
    int k=0;
    int x=0;
    
    int y1=0;
    int x1=0;
    int y2=0;
    int x2=0;
    
    std::cin>>t;
    for (i=0;i<t;i++) {
        std::cin>>n;
        for (j=0;j<n;j++) { //строки
            for (k=0;k<n;k++) { //cтолбцы
            cin>>x;
            if (x=="*" && x1==0) {
                x1=i;
                y1=j;}
            else {
                x2=i;
                y2=j;}}}
                
    //считали, запомнили позиции *, теперь выводим, поменяв местами части позиций *: были звёзды на (x1;y1), (x2;y2), станет (x1;y1), (x2;y2) (x2;y1), (x1;y2) 
    std::cout<<;
} 
