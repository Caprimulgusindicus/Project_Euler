#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
typedef long long ll;
ll pf(int x) {return x*x;}
int main()
{
	long long a=0;
	long long b=0;
	for(ll i=1;i<=100;i++)
		a+=pf(i);
	for(ll i=1;i<=100;i++)
		b+=i;
	b=pf(b);
	cout<<b<<" "<<5050*5050<<endl;
	cout<<b-a<<endl;
	return 0;
}