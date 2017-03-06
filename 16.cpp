#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
	long long a=1;
	long long b=2;
	for(int i=1;i<=1000;i++)
		a=a*b,cout<<a<<endl;
	printf("%lld\n",a);
	return 0;
}