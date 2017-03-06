#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
ll pf(int x) {return x*x;}
int main()
{
	for(int i=1;i<=100;i++)
		if(pow(i,4)<log(i)) cout<<i<<endl;
	return 0;
}