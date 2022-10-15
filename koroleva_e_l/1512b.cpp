#include <iostream> //https://codeforces.com/problemset/problem/1512/B

int main()
{
    int t=0;
    int n=0;
    int i=0;
    int j=0;
    int k=0;
    
    char x;
    int x1=-1;    
    int y1=-1;
    int y2=-1;
    int x2=-1;
    
    std::cin>>t;
    for (i=0;i<t;i++) {
        std::cin>>n;
        for (j=0;j<n;j++) { //строки
            for (k=0;k<n;k++) { //cтолбцы
            std::cin>>x;
            if (x=='*') {
                if  (x1==-1) { // запомнить позицию 1 звезды
                    x1=j;
                    y1=k;}
                else {
                    x2=j; // запомнить позицию 2 звезды
                    y2=k;}}}}
        if (x1==x2) { //если строки или столбцы совпадают 
            x2=abs(x1-1);}
        if (y1==y2) {
            y2=abs(y1-1);}
    //считали данные, запомнили позиции *, теперь выводим их так, что были звёзды на (x1;y1), (x2;y2), станут на (x1;y1), (x2;y2), (x2;y1), (x1;y2) 

        for (j=0;j<n;j++) { //строки
            for (k=0;k<n;k++) { //cтолбцы
                if ((j==x1 && k==y1)||(j==x1 && k==y2)||(j==x2 && k==y1)||(j==x2 && k==y2)) {
                    std::cout<<'*';}
                else {
                    std::cout<<'.';}}
            std::cout<<std::endl;}}
}
