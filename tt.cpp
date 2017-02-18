#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long x,y,z;
		scanf("%lld%lld%lld",&x,&y,&z);
		long long div1=max(x,max(y,z));
		long long div2=min((x+y),min((x+z),(y+z)));
		if (div1>=div2*2) cout<<div2<<endl; 
		else cout<<int(double(x+y+z)/3.0)<<endl;
	}
return 0;
}


首先，每个年级拿一个人组一队，就是1+1+1的这种，如果这时候还剩两个年级，
从少的那个年级拿一个，多的年纪拿两个，以1+2的形式组队，
最后只剩下一个年级的时候，拿3个，再与之前的1+1+1，重组，成两个1+2的队

Bit Difference

Tags: [数学][预处理]

思路

预处理姿势：记录下每一个数位上分别出现了多少个1。
如果第i个数位上出现了cnt[i]个1，那么，在这个数位上产生的“差异值”
为：2cnt[i](n-cnt[i])。sigma (2cnt[i](n-cnt[i])) 即为最终答案。
同类题：

给n个数字，求所有数对异或值之和。[n<=100000]
CF766E [在树上使用这种预处理姿势]
参考代码
http://paste.ubuntu.com/23975892/
题目链接

http://www.spoj.com/problems/BITDIFF/
Decreasing Number of Visible Box

Tags: [STL][sort][贪心]

思路

做法：先对数组a进行排序，再将数组a从头到尾扫一遍，使用multiset维护最小值，
如果,即将放入集合的数字>=最小值的两倍,那我们就删除掉多重集合的最小值。
最后，多重集合中元素的个数即为答案。

证明：“人生得意须尽欢，莫使金樽空对月”。当即将进入集合的箱子，装得下
最小的箱子时，若装入并非最小的箱子，或啥也不装，找不到更优解，喵！

参考代码

code: http://paste.ubuntu.com/23975889/

题目链接

http://www.spoj.com/problems/VISIBLEBOX/

其实x+y+z是这个意思：人能消耗干净
所以说 就是判断 人是不是都能上完
如果都能吃完 那就很愉快 
如果不能吃完 那我就用人数最多的组去吃较小的两个组
这个是因为 2+1跟1+1+1是能够互相转化的
（很好 说得通了（