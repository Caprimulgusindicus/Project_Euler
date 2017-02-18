#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
	long long mark=0;
	long long val=0;
	for(long long i=600000; i<=1000000 ; i++)
	{
		long long tmp=i;
		long long step=0;
		while(tmp>1)
		{
			if(tmp&1) tmp=tmp*3+1;
			else tmp=tmp/2;
			step++;
		}
		if(step>mark) val=i,mark=step;
	}
	cout<<val<<" "<<mark<<endl;
	return 0;
}