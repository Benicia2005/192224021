#include<stdio.h>
int main()
{
	int t,i,n,a[]={16,18,27,16,23,21,29};
	n=sizeof(a)/sizeof(a[0]);
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
