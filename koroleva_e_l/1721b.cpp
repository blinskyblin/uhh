#include <iostream> //https://codeforces.com/problemset/problem/1721/B
#include <algorithm>

int main()
{
    int t=0;
    int n=0;
    int m=0;
    int sx=0;
    int sy=0;
    int d=0;
    std::cin>>t;
    for (int i=0; i<t; i++) {
	std::cin>>n >> m>> sx>> sy >> d;
	if (std::min(sx - 1, m - sy) <= d && std::min(n - sx, sy - 1) <= d) {
	    std::cout<<-1<<"\n";}
	else {
	    std::cout<<n + m - 2<<'\n';}}

}
