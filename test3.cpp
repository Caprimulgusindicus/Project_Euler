#include <cstdio>
#include <bitset>
#include <algorithm>
#include <cstring>
using namespace std;

//bitset<5007> sv;
int vis[5007];


int gcd(int a, int b)
{
    while(b != 0)
    {
        int r = b;
        b = a % b;
        a = r;
    }
    return a;
}

int lcm(int ii,int jj)
{
    return  ii / gcd(ii ,jj) * jj;
}

int main()
{
    
    int n;
    while (~scanf("%d", &n))
    {
        //sv.reset();
        memset(vis,0,sizeof(vis));
        while (n--)
        {
            int x;
            scanf("%d", &x);
            //sv.set(x);
            vis[x]++;
        }
        int ans = -1;
        for (int i = 1; i <= 5000; i++)
        {
            if(!vis[i]) continue;
//            if (!sv.test(i)) continue;
            if(vis[i]>1) ans=max(ans,lcm(i,i));
            for (int j = i+1; j <= 5000; j++)
            {
                if(!vis[j]) continue;
//                if (!sv.test(j)) continue;
                ans = max(ans, lcm(i,j));
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
