/*
tags：[树形dp] [哲♂学]

树形dp奥义：
遇到残暴の树时，不妨先只考虑一条链，找找规律。
so，
首先，我萌假设树是个光头，只有一条链：
先自己和自己愉快地玩几局游戏。
便会发现：
1.“溯洄从之，道阻且长”。（把棋子从权值小的点，移动到权值大的点毫无意义，分分钟被对手逐回来）

2.“乐夫天命复奚疑”。   
（既然如此，顺着数列的单调性，走一遭，莫回首，岂不美哉？）
sg[i]: 从节点i开始是否能胜利(0:败  1:胜)。
if(a[i-1] < a[i] && sg[i-1] == 0) sg[i] = 1;
if(a[i+1] < a[i] && sg[i+1] == 0) sg[i] = 1;   

因为不会回头，所以可以直接这么dp！（无后效性是成立的）

然后，我萌来加特技, duang! 绿树成荫了起来。

对x的所有儿子： 
if(a[cur] < a[x] && sg[cur] == 0) sg[x] = 1;

对所有点dfs一遍，duang! 搞定。 (o・ｖ・o)

code: http://paste.ubuntu.com/23959353/
*/                                                                     

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
const int NICO = 3000 + 10;                                                        
vector<int> vec[NICO];                                                   
int a[NICO], n;
int sg[NICO];

void dfs(int x, int par)
{
    sg[x] = 0;
    for(int i=0;i<vec[x].size();i++)
    {
        int cur = vec[x][i];
        if(cur == par || a[cur] >= a[x]) continue;
        dfs(cur, x);
        if(!sg[cur]) sg[x] = 1;
    } 
}

int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    for(int i=1;i<n;i++)
    {
        int u, v;
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    for(int i=1;i<=n;i++)
    {
        dfs(i, 0);
        if(sg[i]) printf("%d ", i);
    }
} 