// https://codeforces.com/contest/271/problem/A
#include <iostream>
 
int main()
{
    int y=0;
    std::cin>> y;
 
    for(int i=y+1; i<=10000; i++){  
        
        int a=i/1000;
        int b=(i-1000*a)/100;
        int c=(i-1000*a-100*b)/10;
        int d=i%10;
        if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) {
        std::cout<<i;
        break;} }
}
