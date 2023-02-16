#include<stdio.h>
int main()
{
	int m,n,r,i;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		r=i*m;
		printf("%d*%d=%d\n",i,m,r);
	}
}
