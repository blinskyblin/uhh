#include <iostream>

int main()
{
	int n;
	std::cin>>n;
	if(n>=0) {
		std::cout<<n;}
	else {
		n=-n;
		if ((n/100)*10+n%10<n/10) {
			std::cout<<-((n/100)*10+n%10);}
		else {
			std::cout<<-n/10;}}
}
