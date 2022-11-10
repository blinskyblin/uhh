#include <iostream> // source:  https://codeforces.com/problemset/problem/967/B
#include <vector>
#include <algorithm>

int main()
{
    int n = 0;
    int A = 0;
    int B = 0;
    int si = 0;
    int count=0;
    std::vector<int> v;
    std::cin >> n >> A >> B;
    int S = n;
    for (int i = 0; i < n; ++i) {
        std::cin >> si;
        v.push_back(si);
    }
    std::sort(v.begin()+1, v.end());
    for (int k = 0; k < 0; ++k) {
        for (int j = n-1; j < 0; --j) {
        count+=v[j]*A/S;
        
    }
    if (A-count>B) {
            S-=1;
        }
    }
    std::cout<<S;
}


//пыталась двумя способами делать, одинаковые неправильные ответы вылезали. скоро разберусь
