#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int pf(int x)
{return x*x;}
int main()
{
	for(int i=0;i<=1000;i++)
		for(int j=0;j<=1000;j++)
			//for(int k=1000-i-j)
			{
				int k=1000-i-j;
				if(k<0) continue;
				//cout<<i<<" "<<j<<" "<<k<<endl;	
				if((pf(i)+pf(j))==pf(k))
					{cout<<i<<" "<<j<<" "<<k<<endl;break;}
			}
			cout<<200*375*425<<endl;
	return 0;
}