#include <iostream> //https://codeforces.com/problemset/problem/276/A
 
int main()
{
    int n=0;
    int f=0;
    int k=0;
    int t=0;
    int h=-2147483647;
    std::cin>>n>>k;
    for (int i=0; i<n; i++) {
        std::cin>>f>>t;
        if (t>k) {
            f=f-(t-k);}
        if (h<f) {
            h=f;}
    }
    std::cout<<h;
}
