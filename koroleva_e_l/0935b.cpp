#include <iostream> //https://codeforces.com/problemset/problem/935/B
#include <string>

int main() {	
    int n=0;
	int x=0;
	int y=0;
	int d=0; //деньги
	int i=0;
	std::string S;
	std::cin>>n;
	std::cin>>S;
	for (i=0; i<n; i++) {
		if (S[i]=='R') {
			x+=1;}
		if (S[i]=='U') {
			y+=1;}
		if (x==y && S[i]==S[i+1]) {
			d+=1;}}
	std::cout<<d;
}
