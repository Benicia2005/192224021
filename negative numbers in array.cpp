#include<stdio.h>
int main()
{
	int c=0,n,i;
	int a[]={-21,31,-8,1,-18};
	n=sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	  if(a[i]<0)
	  c++;
	  printf("Number of negative numbers: %d",c);
}
