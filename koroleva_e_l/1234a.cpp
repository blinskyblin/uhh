#include<iostream> //https://codeforces.com/problemset/problem/1234/A

int main()
{
    int q=0;
    int x;
    std::cin>>q;
    for (int i=0; i<q; i++) {
        int n=0;
        int sum=0;
        std::cin>>n;
        for(int j=0;j<n;j++){
            std::cin>>x;
            sum+=x;}
        if (sum%n==0) {
            std::cout<<sum/n<<"\n";}
        else {
            std::cout<<sum/n+1<<"\n";}}
}
