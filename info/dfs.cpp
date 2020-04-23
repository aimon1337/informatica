#include <iostream>
using namespace std;
int v[1001],a[1001][1001],n,m;
void dfs(int k)
{
    cout<<k;
    v[k]=1;
    for(int i=1; i<=n; ++i)
    {
        if(a[k][i]==1 && v[i]==0)
            dfs(i);
    }
}
int main()
{
	cin>>n>>m;
    for(int i=1; i<=n; ++i)
        for(int j=1; j<=n; ++j)
            a[i][j]=0;
    int x,y;
    int i;
    for(i=1; i<=m; ++i)
    {
        cin>>x>>y;
        a[x][y]=a[y][x]=1;
    }
    int p;
    cin>>p;
    dfs(p);
    return 0;
}
