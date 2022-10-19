#include <iostream> //https://codeforces.com/problemset/problem/1352/A
#include <vector>
#include <cmath>
int main()
{
    int t=0;
    int k=0;

    
    std::cin>>t;
    for (int i=0; i<t; i++) {
        int size=0;
        int realsize=0;
        std::vector<int> v;
        std::cin>>k;
        while (k>0) { //сложнее через for
            v.push_back(k % 10);
            if (k%10) {
                size+=1;
            }
            k/=10;
        }
        
        realsize=v.size();
        std::cout<<size<<"\n";
        for (int j=0; j<realsize; j++) {
            if (v[j]!=0) {
                std::cout<<v[j]*pow(10,j)<<" ";
            }
        }
    std::cout<<"\n";
    }
}
