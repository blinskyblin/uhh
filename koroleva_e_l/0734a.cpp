#include <iostream> //https://codeforces.com/contest/734/problem/A
#include <string>
int main()
{
    int n=0;
    int a=0;
    int d=0;
    std::string s;
    std::cin>>n>>s;
    for(int i=0;i<n;i++) {
        if(s[i]=='A') {
            a+=1;}
        else {
            d+=1;}}
    
    if(a>d) {
        std::cout<<"Anton";}
    else {
        if(d>a) {
        std::cout<<"Danik";}
        else {
        std::cout<<"Friendship";}}
}
