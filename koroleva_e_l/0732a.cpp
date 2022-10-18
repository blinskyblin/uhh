#include <iostream> //https://codeforces.com/problemset/problem/732/A

int main()
{
    int k,r,sum;
    int c=1; //начальное кол-во лопат
    std::cin>>k>>r;
    sum=k;
    while((sum%10!=0)&&(sum%10!=r)) { //непонятно как с for делать, так что вот
        c+=1;
        sum+=k;}
    std::cout<<c;
}
