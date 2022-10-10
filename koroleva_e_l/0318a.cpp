// https://codeforces.com/contest/318/problem/A
#include<iostream>
#include <vector>
 
int main()
{ 
    int n,k,i,j;
    std::cin>>n>>k;
    std::vector<int>blah;
    for (i=1;i<=n;i+=2) {
        blah.push_back(i);}
    for (j=2;j<=n;j+=2) {
        blah.push_back(j);}
 
std::cout<<blah.at(k-1); 
//громадные числа - жуть, опять проверку не прошло
}
