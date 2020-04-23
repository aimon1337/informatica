#include <iostream>
using namespace std;
int a[1001][1001],coada[1001],viz[1001];
int i,n,el,j,p,u,pl,m,x,y;
int main()
{
	cin>>n>>m;
    for(i=1; i<=m; ++i)
    {
        cin>>x>>y;
        a[x][y]=a[y][x]=1;
    }
    for(i=1;i<=n;++i)
		viz[i]=0;
	cin>>pl;
	p=1;u=1;
	while(p<=u){
		el=coada[p];
		for(j=1;j<=n;++j)
			if((a[el][j]==1) && (viz[j]==0)){
				u++;
				coada[u]=j;
				viz[j]=1;
			}
		p++;
	}
	for(i=1;i<=u;++i)
		cout<<coada[i];
    return 0;
}
